/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

static const unsigned char bootClut[ 256 * 3 ] = 
{
	0xff,0xff,0xff, 0xbf,0xbf,0xbf, 0xbe,0xbe,0xbe, 0xbd,0xbd,0xbd, 
	0xbc,0xbc,0xbc, 0xff,0xff,0x00, 0xba,0xba,0xba, 0xb9,0xb9,0xb9, 
	0xb8,0xb8,0xb8, 0xb7,0xb7,0xb7, 0xb6,0xb6,0xb6, 0xb5,0xb5,0xb5, 
	0xb4,0xb4,0xb4, 0xb3,0xb3,0xb3, 0xb2,0xb2,0xb2, 0x00,0x00,0x00, 
	
	0xb1,0xb1,0xb1, 0xb0,0xb0,0xb0, 0xaf,0xaf,0xaf, 0xae,0xae,0xae, 
	0xad,0xad,0xad, 0xac,0xac,0xac, 0xab,0xab,0xab, 0xaa,0xaa,0xaa, 
	0xff,0x00,0xff, 0xa9,0xa9,0xa9, 0xa8,0xa8,0xa8, 0xa7,0xa7,0xa7, 
	0xa6,0xa6,0xa6, 0xa5,0xa5,0xa5, 0xa4,0xa4,0xa4, 0xa3,0xa3,0xa3, 
	
	0xa2,0xa2,0xa2, 0xa1,0xa1,0xa1, 0xa0,0xa0,0xa0, 0xff,0x00,0x00, 
	0x9f,0x9f,0x9f, 0x9e,0x9e,0x9e, 0x9d,0x9d,0x9d, 0x9c,0x9c,0x9c, 
	0x9b,0x9b,0x9b, 0x9a,0x9a,0x9a, 0xcc,0xcc,0xff, 0xcc,0xcc,0xcc, 
	0x99,0x99,0x99, 0x98,0x98,0x98, 0x97,0x97,0x97, 0x96,0x96,0x96, 
	
	0x95,0x95,0x95, 0x94,0x94,0x94, 0x93,0x93,0x93, 0x92,0x92,0x92, 
	0x91,0x91,0x91, 0x90,0x90,0x90, 0x8f,0x8f,0x8f, 0x8e,0x8e,0x8e, 
	0x8d,0x8d,0x8d, 0x8c,0x8c,0x8c, 0x8b,0x8b,0x8b, 0x8a,0x8a,0x8a, 
	0x89,0x89,0x89, 0x88,0x88,0x88, 0x86,0x86,0x86, 0x85,0x85,0x85, 
	
	0x84,0x84,0x84, 0x83,0x83,0x83, 0x82,0x82,0x82, 0x81,0x81,0x81, 
	0x80,0x80,0x80, 0x7f,0x7f,0x7f, 0x7e,0x7e,0x7e, 0x7d,0x7d,0x7d, 
	0x7c,0x7c,0x7c, 0x7b,0x7b,0x7b, 0x7a,0x7a,0x7a, 0x79,0x79,0x79, 
	0x78,0x78,0x78, 0x76,0x76,0x76, 0x75,0x75,0x75, 0x74,0x74,0x74, 
	
	0x73,0x73,0x73, 0x72,0x72,0x72, 0x71,0x71,0x71, 0x70,0x70,0x70, 
	0x6f,0x6f,0x6f, 0x6e,0x6e,0x6e, 0x6d,0x6d,0x6d, 0x6c,0x6c,0x6c, 
	0x6b,0x6b,0x6b, 0x6a,0x6a,0x6a, 0x69,0x69,0x69, 0x68,0x68,0x68, 
	0x67,0x67,0x67, 0x66,0x66,0x66, 0x64,0x64,0x64, 0x63,0x63,0x63, 
	
	0x62,0x62,0x62, 0x61,0x61,0x61, 0x60,0x60,0x60, 0x5f,0x5f,0x5f, 
	0x5e,0x5e,0x5e, 0x5d,0x5d,0x5d, 0x5c,0x5c,0x5c, 0x5b,0x5b,0x5b, 
	0x5a,0x5a,0x5a, 0x59,0x59,0x59, 0x58,0x58,0x58, 0x57,0x57,0x57, 
	0x56,0x56,0x56, 0x54,0x54,0x54, 0x53,0x53,0x53, 0x52,0x52,0x52, 
	
	0x51,0x51,0x51, 0x50,0x50,0x50, 0x4f,0x4f,0x4f, 0x4e,0x4e,0x4e, 
	0x4d,0x4d,0x4d, 0x4c,0x4c,0x4c, 0x4b,0x4b,0x4b, 0x4a,0x4a,0x4a, 
	0x49,0x49,0x49, 0x48,0x48,0x48, 0x47,0x47,0x47, 0x46,0x46,0x46, 
	0x45,0x45,0x45, 0x43,0x43,0x43, 0x42,0x42,0x42, 0x41,0x41,0x41, 
	
	0x40,0x40,0x40, 0x3f,0x3f,0x3f, 0x3e,0x3e,0x3e, 0x3d,0x3d,0x3d, 
	0x3c,0x3c,0x3c, 0x3b,0x3b,0x3b, 0x3a,0x3a,0x3a, 0x39,0x39,0x39, 
	0x38,0x38,0x38, 0x37,0x37,0x37, 0x36,0x36,0x36, 0x35,0x35,0x35, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x00,0xff,0xff, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x00,0xff,0x00, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x00,0x00,0xff, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0xd0,0x00,0x00, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x00,0xbb,0x00, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 
	0x65,0x65,0x65, 0x65,0x65,0x65, 0x65,0x65,0x65, 0xbb,0xbb,0xbb, 
	0x65,0x65,0x65, 0x88,0x88,0x88, 0x77,0x77,0x77, 0x55,0x55,0x55, 
	0x44,0x44,0x44, 0x22,0x22,0x22, 0x65,0x65,0x65, 0x00,0x00,0x00 
};

#define kFailedBootWidth    28
#define kFailedBootHeight   28
#define kFailedBootOffset  -44

static const unsigned char failedBootPict[] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x13,0x1b,0xc0,0x27,0x27,0xc0,0x1b,0x13,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x15,0xc0,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0xc0,0x15,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x13,0xc0,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x1e,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x11,0x27,0x29,0x29,0x29,0xc0,0xa0,0x11,0x09,0x09,0x11,0xa0,0xc0,0x29,0x29,0x29,0x20,0x0c,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x07,0x20,0x29,0x29,0x29,0xc0,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x15,0x25,0x29,0x29,0x1e,0x07,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x15,0x29,0x29,0x29,0x29,0x29,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa3,0x25,0x29,0x29,0x15,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x09,0xc0,0x29,0x29,0xc0,0x29,0x29,0x29,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x29,0x29,0xc0,0x09,0x00,0x00,0x00,
	0x00,0x00,0x00,0x13,0x29,0x29,0xc0,0x09,0x1b,0x29,0x29,0x29,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0xc0,0x29,0x29,0x13,0x00,0x00,0x00,
	0x00,0x00,0x00,0x1b,0x29,0x29,0xa0,0x00,0x01,0x1b,0x29,0x29,0x29,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x29,0x29,0x1b,0x00,0x00,0x00,
	0x00,0x00,0x00,0xc0,0x29,0x29,0x11,0x00,0x00,0x01,0x1b,0x29,0x29,0x29,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x29,0x29,0xc0,0x00,0x00,0x00,
	0x00,0x00,0x00,0x27,0x29,0x29,0x09,0x00,0x00,0x00,0x01,0x1b,0x29,0x29,0x29,0x1b,0x00,0x00,0x00,0x00,0x00,0x09,0x29,0x29,0x27,0x00,0x00,0x00,
	0x00,0x00,0x00,0x27,0x29,0x29,0x09,0x00,0x00,0x00,0x00,0x01,0x1b,0x29,0x29,0x29,0x1b,0x00,0x00,0x00,0x00,0x09,0x29,0x29,0x27,0x00,0x00,0x00,
	0x00,0x00,0x00,0xc0,0x29,0x29,0x11,0x00,0x00,0x00,0x00,0x00,0x01,0x1b,0x29,0x29,0x29,0x1b,0x00,0x00,0x00,0x11,0x29,0x29,0xc0,0x00,0x00,0x00,
	0x00,0x00,0x00,0x1b,0x29,0x29,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x1b,0x29,0x29,0x29,0x1b,0x00,0x00,0xa0,0x29,0x29,0x1b,0x00,0x00,0x00,
	0x00,0x00,0x00,0x13,0x29,0x29,0xc0,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x1b,0x29,0x29,0x29,0x1b,0x08,0xc0,0x29,0x29,0x13,0x00,0x00,0x00,
	0x00,0x00,0x00,0x09,0xc0,0x29,0x29,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x1b,0x29,0x29,0x29,0xc0,0x29,0x29,0xc0,0x09,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x15,0x29,0x29,0x25,0xa3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x1b,0x29,0x29,0x29,0x29,0x29,0x15,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x07,0x1e,0x29,0x29,0x25,0x15,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0xc0,0x29,0x29,0x29,0x1e,0x07,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x0c,0x20,0x29,0x29,0x29,0xc0,0xa0,0x11,0x09,0x09,0x11,0xa0,0xc0,0x29,0x29,0x29,0x20,0x0c,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x1e,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x1e,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x15,0xc0,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0x29,0xc0,0x15,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x13,0x1b,0xc0,0x27,0x27,0xc0,0x1b,0x13,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};