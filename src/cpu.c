#include "cpu.h"

void cpu_reset(struct cpu *cpu)
{
	cpu->program_counter = 0xFFFC; /* Program Counter Reset Vector */
	cpu->stack_pointer = 0x00;
	cpu->accumulator = 0x00;
	cpu->x_register = 0x00;
	cpu->y_register = 0x00;

	cpu_status_reset(cpu);
}

void cpu_status_reset(struct cpu *cpu)
{
	cpu->procesor_status = 0b00100000;
}
