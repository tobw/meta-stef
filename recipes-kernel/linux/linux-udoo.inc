DESCRIPTION = "Linux kernel for udoo"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"
DEPENDS += "lzop-native"
require recipes-kernel/linux/linux-imx.inc
FILESEXTRAPATHS_prepend := "${THISDIR}/files/udoo:"

SCMVERSION ?= "y"

# SRC_URI for kernel
SRC_URI = "git://github.com/wolfgar/Kernel_Unico.git \
           file://defconfig \
"

