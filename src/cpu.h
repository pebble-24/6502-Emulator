#ifndef CPU_H
#define CPU_H

#include <stdio.h>

#include "types.h"

struct cpu {
	u16 program_counter;
	u8 stack_pointer;
	u8 accumulator;
	u8 x_register;
	u8 y_register;
	u8 procesor_status;
};

/*
 * Processor Status Register Breakdown
 * NV-B DIZC
 * 0010 0000 Values
 * 7654 3210 Bit Indices
 * 
 * Bit 7 Negative
 * Bit 6 Overflow
 * Bit 5 Always Set
 * Bit 4 Break
 * 
 * Bit 3 Decimal
 * Bit 2 Interrupt Disable
 * Bit 1 Zero
 * Bit 0 Carry
 */

void cpu_reset(struct cpu *cpu);
void cpu_status_reset(struct cpu *cpu);

void cpu_registers_output(struct cpu *cpu);
void cpu_status_output(byte status_register);

#endif
