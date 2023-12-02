#ifndef COMPUTER_H
#define COMPUTER_H

#include <stdbool.h>

#include "types.h"
#include "instructions.h"
#include "cpu.h"
#include "memory.h"

void run(struct cpu *cpu, struct memory *ram, bool useCycles, i64 *cycles);
void run_limited(struct cpu *cpu, struct memory *ram, i64 *cycles);
void run_unlimited(struct cpu *cpu, struct memory *ram);

#endif