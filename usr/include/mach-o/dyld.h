/*
 * Copyright (c) 1999-2008 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
#ifndef _MACH_O_DYLD_H_
#define _MACH_O_DYLD_H_


#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <mach-o/loader.h>

#define __OSX_AVAILABLE_STARTING(x, y)
#define __OSX_AVAILABLE_BUT_DEPRECATED(x, y, z, n)

#if __cplusplus
extern "C" {
#endif 

/*
 * The following functions allow you to iterate through all loaded images.  
 * This is not a thread safe operation.  Another thread can add or remove
 * an image during the iteration.  
 *
 * Many uses of these routines can be replace by a call to dladdr() which 
 * will return the mach_header and name of an image, given an address in 
 * the image. dladdr() is thread safe.
 */
extern uint32_t                    _dyld_image_count(void)                              __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);
extern const struct mach_header*   _dyld_get_image_header(uint32_t image_index)         __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);
extern intptr_t                    _dyld_get_image_vmaddr_slide(uint32_t image_index)   __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);
extern const char*                 _dyld_get_image_name(uint32_t image_index)           __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);


/*
 * The following functions allow you to install callbacks which will be called   
 * by dyld whenever an image is loaded or unloaded.  During a call to _dyld_register_func_for_add_image()
 * the callback func is called for every existing image.  Later, it is called as each new image
 * is loaded and bound (but initializers not yet run).  The callback registered with
 * _dyld_register_func_for_remove_image() is called after any terminators in an image are run
 * and before the image is un-memory-mapped.
 */
extern void _dyld_register_func_for_add_image(void (*func)(const struct mach_header* mh, intptr_t vmaddr_slide))    __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);
extern void _dyld_register_func_for_remove_image(void (*func)(const struct mach_header* mh, intptr_t vmaddr_slide)) __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);


/*
 * NSVersionOfRunTimeLibrary() returns the current_version number of the currently dylib 
 * specifed by the libraryName.  The libraryName parameter would be "bar" for /path/libbar.3.dylib and
 * "Foo" for /path/Foo.framework/Versions/A/Foo.  It returns -1 if no such library is loaded.
 */
extern int32_t NSVersionOfRunTimeLibrary(const char* libraryName)            __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);


/*
 * NSVersionOfRunTimeLibrary() returns the current_version number that the main executable was linked
 * against at build time.  The libraryName parameter would be "bar" for /path/libbar.3.dylib and
 * "Foo" for /path/Foo.framework/Versions/A/Foo.  It returns -1 if the main executable did not link
 * against the specified library.
 */
extern int32_t NSVersionOfLinkTimeLibrary(const char* libraryName)           __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);


/*
 * _NSGetExecutablePath() copies the path of the main executable into the buffer. The bufsize parameter
 * should initially be the size of the buffer.  The function returns 0 if the path was successfully copied,
 * and *bufsize is left unchanged. It returns -1 if the buffer is not large enough, and *bufsize is set 
 * to the size required. 
 * 
 * Note that _NSGetExecutablePath will return "a path" to the executable not a "real path" to the executable. 
 * That is the path may be a symbolic link and not the real file. With deep directories the total bufsize 
 * needed could be more than MAXPATHLEN.
 */
extern int _NSGetExecutablePath(char* buf, uint32_t* bufsize)                 __OSX_AVAILABLE_STARTING(__MAC_10_2, __IPHONE_2_0);



/*
 * _dyld_moninit() is a private interface between dyld and libSystem.
 */
extern void _dyld_moninit(void (*monaddition)(char *lowpc, char *highpc))    __OSX_AVAILABLE_STARTING(__MAC_10_1, __IPHONE_2_0);





/*
 * The following dyld API's are deprecated as of Mac OS X 10.5.  They are either  
 * no longer necessary or are superceeded by dlopen and friends in <dlfcn.h>.
 * dlopen/dlsym/dlclose have been available since Mac OS X 10.3 and work with 
 * dylibs and bundles.  
 *
 *    NSAddImage                           -> dlopen
 *    NSLookupSymbolInImage                -> dlsym
 *    NSCreateObjectFileImageFromFile      -> dlopen
 *    NSDestroyObjectFileImage             -> dlclose
 *    NSLinkModule                         -> not needed when dlopen used
 *    NSUnLinkModule                       -> not needed when dlclose used
 *    NSLookupSymbolInModule               -> dlsym
 *    _dyld_image_containing_address       -> dladdr
 *    NSLinkEditError                      -> dlerror
 *
 */

#ifndef ENUM_DYLD_BOOL
#define ENUM_DYLD_BOOL
  #undef FALSE
  #undef TRUE
  enum DYLD_BOOL { FALSE, TRUE };
#endif /* ENUM_DYLD_BOOL */


/* Object file image API */
typedef enum {
    NSObjectFileImageFailure, /* for this a message is printed on stderr */
    NSObjectFileImageSuccess,
    NSObjectFileImageInappropriateFile,
    NSObjectFileImageArch,
    NSObjectFileImageFormat, /* for this a message is printed on stderr */
    NSObjectFileImageAccess
} NSObjectFileImageReturnCode;

typedef struct __NSObjectFileImage*  NSObjectFileImage;

/* NSObjectFileImage can only be used with MH_BUNDLE files */
extern NSObjectFileImageReturnCode NSCreateObjectFileImageFromFile(const char* pathName, NSObjectFileImage *objectFileImage)               __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern NSObjectFileImageReturnCode NSCreateObjectFileImageFromMemory(const void *address, size_t size, NSObjectFileImage *objectFileImage) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern bool                        NSDestroyObjectFileImage(NSObjectFileImage objectFileImage)                                             __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);

extern uint32_t     NSSymbolDefinitionCountInObjectFileImage(NSObjectFileImage objectFileImage)                   __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern const char*  NSSymbolDefinitionNameInObjectFileImage(NSObjectFileImage objectFileImage, uint32_t ordinal)  __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern uint32_t     NSSymbolReferenceCountInObjectFileImage(NSObjectFileImage objectFileImage)                    __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern const char*  NSSymbolReferenceNameInObjectFileImage(NSObjectFileImage objectFileImage, uint32_t ordinal, bool *tentative_definition) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern bool         NSIsSymbolDefinedInObjectFileImage(NSObjectFileImage objectFileImage, const char* symbolName) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern void*        NSGetSectionDataInObjectFileImage(NSObjectFileImage objectFileImage, const char* segmentName, const char* sectionName, size_t *size) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern bool         NSHasModInitObjectFileImage(NSObjectFileImage objectFileImage)                                __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_3,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);

typedef struct __NSModule* NSModule;
extern const char*  NSNameOfModule(NSModule m)         __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern const char*  NSLibraryNameForModule(NSModule m) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);

extern NSModule NSLinkModule(NSObjectFileImage objectFileImage, const char* moduleName, uint32_t options) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
#define NSLINKMODULE_OPTION_NONE                         0x0
#define NSLINKMODULE_OPTION_BINDNOW                      0x1
#define NSLINKMODULE_OPTION_PRIVATE                      0x2
#define NSLINKMODULE_OPTION_RETURN_ON_ERROR              0x4
#define NSLINKMODULE_OPTION_DONT_CALL_MOD_INIT_ROUTINES  0x8
#define NSLINKMODULE_OPTION_TRAILING_PHYS_NAME          0x10

extern bool NSUnLinkModule(NSModule module, uint32_t options) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
#define NSUNLINKMODULE_OPTION_NONE                  0x0
#define NSUNLINKMODULE_OPTION_KEEP_MEMORY_MAPPED    0x1
#define NSUNLINKMODULE_OPTION_RESET_LAZY_REFERENCES	0x2

/* symbol API */
typedef struct __NSSymbol* NSSymbol;
extern bool     NSIsSymbolNameDefined(const char* symbolName)                                                    __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern bool     NSIsSymbolNameDefinedWithHint(const char* symbolName, const char* libraryNameHint)               __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern bool     NSIsSymbolNameDefinedInImage(const struct mach_header* image, const char* symbolName)            __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern NSSymbol NSLookupAndBindSymbol(const char* symbolName)                                                    __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern NSSymbol NSLookupAndBindSymbolWithHint(const char* symbolName, const char* libraryNameHint)               __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern NSSymbol NSLookupSymbolInModule(NSModule module, const char* symbolName)                                  __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern NSSymbol NSLookupSymbolInImage(const struct mach_header* image, const char* symbolName, uint32_t options) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
#define NSLOOKUPSYMBOLINIMAGE_OPTION_BIND            0x0
#define NSLOOKUPSYMBOLINIMAGE_OPTION_BIND_NOW        0x1
#define NSLOOKUPSYMBOLINIMAGE_OPTION_BIND_FULLY      0x2
#define NSLOOKUPSYMBOLINIMAGE_OPTION_RETURN_ON_ERROR 0x4
extern const char*  NSNameOfSymbol(NSSymbol symbol)    __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern void *       NSAddressOfSymbol(NSSymbol symbol) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern NSModule     NSModuleForSymbol(NSSymbol symbol) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);

/* error handling API */
typedef enum {
    NSLinkEditFileAccessError,
    NSLinkEditFileFormatError,
    NSLinkEditMachResourceError,
    NSLinkEditUnixResourceError,
    NSLinkEditOtherError,
    NSLinkEditWarningError,
    NSLinkEditMultiplyDefinedError,
    NSLinkEditUndefinedError
} NSLinkEditErrors;

/*
 * For the NSLinkEditErrors value NSLinkEditOtherError these are the values
 * passed to the link edit error handler as the errorNumber (what would be an
 * errno value for NSLinkEditUnixResourceError or a kern_return_t value for
 * NSLinkEditMachResourceError).
 */
typedef enum {
    NSOtherErrorRelocation, 
    NSOtherErrorLazyBind,
    NSOtherErrorIndrLoop,
    NSOtherErrorLazyInit,
    NSOtherErrorInvalidArgs
} NSOtherErrorNumbers;

extern void NSLinkEditError(NSLinkEditErrors *c, int *errorNumber, const char** fileName, const char** errorString) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);

typedef struct {
     void     (*undefined)(const char* symbolName);
     NSModule (*multiple)(NSSymbol s, NSModule oldModule, NSModule newModule); 
     void     (*linkEdit)(NSLinkEditErrors errorClass, int errorNumber,
                          const char* fileName, const char* errorString);
} NSLinkEditErrorHandlers;

extern void NSInstallLinkEditErrorHandlers(const NSLinkEditErrorHandlers *handlers) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);

extern bool                      NSAddLibrary(const char* pathName)                   __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern bool                      NSAddLibraryWithSearching(const char* pathName)      __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern const struct mach_header* NSAddImage(const char* image_name, uint32_t options) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
#define NSADDIMAGE_OPTION_NONE                  	0x0
#define NSADDIMAGE_OPTION_RETURN_ON_ERROR       	0x1
#define NSADDIMAGE_OPTION_WITH_SEARCHING        	0x2
#define NSADDIMAGE_OPTION_RETURN_ONLY_IF_LOADED 	0x4
#define NSADDIMAGE_OPTION_MATCH_FILENAME_BY_INSTALLNAME	0x8

extern bool _dyld_present(void)                                                              __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern bool _dyld_launched_prebound(void)                                                    __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern bool _dyld_all_twolevel_modules_prebound(void)                                        __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_3,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern void _dyld_bind_objc_module(const void* objc_module)                                  __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern bool _dyld_bind_fully_image_containing_address(const void* address)                   __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern bool _dyld_image_containing_address(const void* address)                              __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_3,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);
extern void _dyld_lookup_and_bind(const char* symbol_name, void **address, NSModule* module) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern void _dyld_lookup_and_bind_with_hint(const char* symbol_name, const char* library_name_hint, void** address, NSModule* module) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_4,__IPHONE_NA,__IPHONE_NA);
extern void _dyld_lookup_and_bind_fully(const char* symbol_name, void** address, NSModule* module) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_1,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);

extern const struct mach_header*  _dyld_get_image_header_containing_address(const void* address) __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_3,__MAC_10_5,__IPHONE_NA,__IPHONE_NA);


#if __cplusplus
}
#endif 

#endif /* _MACH_O_DYLD_H_ */
