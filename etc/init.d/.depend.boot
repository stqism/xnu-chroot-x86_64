TARGETS = mountkernfs.sh hostname.sh udev mountdevsubfs.sh urandom mountall.sh mountall-bootclean.sh hwclock.sh mountnfs.sh mountnfs-bootclean.sh networking resolvconf checkroot.sh checkfs.sh bootmisc.sh procps checkroot-bootclean.sh kmod
INTERACTIVE = udev checkroot.sh checkfs.sh
udev: mountkernfs.sh
mountdevsubfs.sh: mountkernfs.sh udev
urandom: mountall.sh mountall-bootclean.sh hwclock.sh
mountall.sh: checkfs.sh checkroot-bootclean.sh
mountall-bootclean.sh: mountall.sh
hwclock.sh: mountdevsubfs.sh
mountnfs.sh: mountall.sh mountall-bootclean.sh networking
mountnfs-bootclean.sh: mountall.sh mountall-bootclean.sh mountnfs.sh
networking: mountkernfs.sh mountall.sh mountall-bootclean.sh urandom resolvconf procps
resolvconf: mountall.sh mountall-bootclean.sh
checkroot.sh: hwclock.sh mountdevsubfs.sh hostname.sh
checkfs.sh: checkroot.sh
bootmisc.sh: mountall.sh mountall-bootclean.sh mountnfs.sh mountnfs-bootclean.sh udev checkroot-bootclean.sh
procps: mountkernfs.sh mountall.sh mountall-bootclean.sh udev
checkroot-bootclean.sh: checkroot.sh
kmod: checkroot.sh
