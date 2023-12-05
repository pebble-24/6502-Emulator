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

void cpu_registers_output(struct cpu *cpu)
{
	printf("Program Counter:    %x\n", cpu->program_counter);
	printf("Stack Pointer:      %x\n", cpu->stack_pointer);
	printf("Accumulator:        %x\n", cpu->accumulator);
	printf("X Register:         %x\n", cpu->x_register);
	printf("Y Register:         %x\n", cpu->y_register);
	cpu_status_output(cpu->procesor_status);
}

void cpu_status_output(byte status_register)
{
	printf("Status Register:    %x\n", status_register);
	printf("Negative:           %x\n", (status_register & 0b10000000) >> 7);
	printf("Overflow:           %x\n", (status_register & 0b01000000) >> 6);
	printf("Break:              %x\n", (status_register & 0b00010000) >> 4);
	printf("Decimal:            %x\n", (status_register & 0b00001000) >> 3);
	printf("Interrupt Disable:  %x\n", (status_register & 0b00000100) >> 2);
	printf("Zero:               %x\n", (status_register & 0b00000010) >> 1);
	printf("Carry:              %x\n", (status_register & 0b00000001));
}
