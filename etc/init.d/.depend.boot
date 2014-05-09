TARGETS = mountkernfs.sh hostname.sh udev mountdevsubfs.sh hwclock.sh checkroot.sh mountall.sh mountall-bootclean.sh mountnfs.sh mountnfs-bootclean.sh networking resolvconf urandom checkroot-bootclean.sh bootmisc.sh kmod udev-finish checkfs.sh procps
INTERACTIVE = udev checkroot.sh checkfs.sh
udev: mountkernfs.sh
mountdevsubfs.sh: mountkernfs.sh udev
hwclock.sh: mountdevsubfs.sh
checkroot.sh: hwclock.sh mountdevsubfs.sh hostname.sh
mountall.sh: checkfs.sh checkroot-bootclean.sh
mountall-bootclean.sh: mountall.sh
mountnfs.sh: mountall.sh mountall-bootclean.sh networking
mountnfs-bootclean.sh: mountall.sh mountall-bootclean.sh mountnfs.sh
networking: resolvconf mountkernfs.sh mountall.sh mountall-bootclean.sh urandom procps
resolvconf: mountall.sh mountall-bootclean.sh
urandom: mountall.sh mountall-bootclean.sh hwclock.sh
checkroot-bootclean.sh: checkroot.sh
bootmisc.sh: checkroot-bootclean.sh mountall.sh mountall-bootclean.sh mountnfs.sh mountnfs-bootclean.sh udev
kmod: checkroot.sh
udev-finish: udev mountall.sh mountall-bootclean.sh
checkfs.sh: checkroot.sh
procps: mountkernfs.sh mountall.sh mountall-bootclean.sh udev
