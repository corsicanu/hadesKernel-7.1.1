#!/bin/bash
export CROSS_COMPILE=../PLATFORM/prebuilts/gcc/linux-x86/arm/arm-eabi-4.8/bin/arm-eabi-
export ARCH=arm

make VARIANT_DEFCONFIG=msm8916_sec_defconfig SELINUX_DEFCONFIG=selinux_defconfig
make -j
