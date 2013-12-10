xnu-chroot-x86_64
=================
A Debian sid Linux chroot designed to compile darwin for arm

The xnu folder is at the root, everything else has been taken care of.

Be sure to clone this repo with ``--recursive``, so you pull the xnu submodule.

Note: you'll need a /dev, /proc, and /sys for the sanity of clang.

Some form of ``sudo mount -o bind /dev dev`` for all 3 would work perfectly.
