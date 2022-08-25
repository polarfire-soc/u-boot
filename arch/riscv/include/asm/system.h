/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2017 Andes Technology Corporation
 * Rick Chen, Andes Technology Corporation <rick@andestech.com>
 */

#ifndef __ASM_RISCV_SYSTEM_H
#define __ASM_RISCV_SYSTEM_H

/*
 * Interrupt configuring macros.
 *
 * TODO
 *
 */

static inline void local_irq_save(
	unsigned long flags __attribute__((unused)))
{
	__asm__ __volatile__ ("" : : : "memory");
}

static inline void local_irq_enable(void)
{
	__asm__ __volatile__ ("" : : : "memory");
}

static inline void local_irq_disable(void)
{
	__asm__ __volatile__ ("" : : : "memory");
}

static inline void local_save_flags(
	unsigned long flags __attribute__((unused)))
{
	__asm__ __volatile__ ("" : : : "memory");
}

static inline void local_irq_restore(
	unsigned long flags __attribute__((unused)))
{
	__asm__ __volatile__ ("" : : : "memory");
}

#endif	/* __ASM_RISCV_SYSTEM_H */
