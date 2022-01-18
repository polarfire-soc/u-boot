/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2019 Microchip Technology Inc.
 * Padmarao Begari <padmarao.begari@microchip.com>
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <linux/sizes.h>

#define CONFIG_SYS_SDRAM_BASE       0x1000000000
#define CONFIG_SYS_INIT_SP_ADDR     (CONFIG_SYS_SDRAM_BASE + SZ_2M)

#define CONFIG_SYS_BOOTM_LEN        SZ_64M

#define CONFIG_STANDALONE_LOAD_ADDR 0x1000200000

/* Environment options */

#define BOOT_TARGET_DEVICES(func) \
	func(MMC, mmc, 0) \
	func(DHCP, dhcp, na)

#include <config_distro_bootcmd.h>

#define CONFIG_EXTRA_ENV_SETTINGS \
	"bootm_size=0x10000000\0" \
	"kernel_addr_r=0x1004000000\0" \
	"fdt_addr_r=0x1008000000\0" \
	"scriptaddr=0x1008100000\0" \
	"pxefile_addr_r=0x1008200000\0" \
	"ramdisk_addr_r=0x1008300000\0" \
	BOOTENV

#endif /* __CONFIG_H */
