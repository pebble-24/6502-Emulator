#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include <stddef.h>

#include "types.h"
#include "cpu.h"
#include "memory.h"


extern void (*instructions[256])(struct cpu *cpu, struct memory *ram, i64 *cycles);

#endif