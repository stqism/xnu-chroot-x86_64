TARGETS = mountkernfs.sh hostname.sh udev mountdevsubfs.sh hwclock.sh checkroot.sh mountall.sh mountall-bootclean.sh mountnfs.sh mountnfs-bootclean.sh networking urandom checkroot-bootclean.sh bootmisc.sh checkfs.sh kmod procps
INTERACTIVE = udev checkroot.sh checkfs.sh
udev: mountkernfs.sh
mountdevsubfs.sh: mountkernfs.sh udev
hwclock.sh: mountdevsubfs.sh
checkroot.sh: hwclock.sh mountdevsubfs.sh hostname.sh
mountall.sh: checkfs.sh checkroot-bootclean.sh
mountall-bootclean.sh: mountall.sh
mountnfs.sh: mountall.sh mountall-bootclean.sh networking
mountnfs-bootclean.sh: mountall.sh mountall-bootclean.sh mountnfs.sh
networking: mountkernfs.sh mountall.sh mountall-bootclean.sh urandom procps
urandom: mountall.sh mountall-bootclean.sh hwclock.sh
checkroot-bootclean.sh: checkroot.sh
bootmisc.sh: checkroot-bootclean.sh mountall-bootclean.sh mountall.sh mountnfs.sh mountnfs-bootclean.sh udev
checkfs.sh: checkroot.sh
kmod: checkroot.sh
procps: mountkernfs.sh mountall.sh mountall-bootclean.sh udev
