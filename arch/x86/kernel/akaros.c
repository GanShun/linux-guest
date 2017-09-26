/*
 * Akaros paravirt_ops implementation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * Copyright (c) 2017 Google Inc.
 *   Author: Gan Shun Lim <ganshun.gmail.com>
 */

#include <asm/cpu.h>
#include <asm/hypervisor.h>



bool akaros_x2apic_available(void)
{
	return true;
}

const struct hypervisor_x86 x86_hyper_ __refconst = {
	.name			= "AKAROS",
	.detect			= akaros_detect,
	.x2apic_available	= akaros_x2apic_available,
};
EXPORT_SYMBOL_GPL(x86_hyper_kvm);
