#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include <stddef.h>

#include "types.h"
#include "cpu.h"
#include "memory.h"

extern void (*instructions[256])(struct cpu *cpu, struct memory *ram,
				 i64 *cycles);

/*
 * Addressing Modes
 * IMP    - Implicit
 * ACC    - Accumulator
 * IM     - Immediate
 * ZP     - Zero Page
 * ZPX    - Zero Page X
 * ZPY    - Zero Page Y
 * REL    - Relative
 * ABS    - Absolute
 * ABSX   - Absolute X
 * ABSY   - Absolute Y
 * IND    - Indirect
 * IXIND  - Indexed Indirect
 * INDIX  - Indirect Indexed
 */

enum INSTRUCTIONS {
	LDA_IM = 0xA9,
	LDA_ZP = 0xA5,
	LDA_ZPX = 0xB5,
	LDA_ABS = 0xAD,
	LDA_ABSX = 0xBD,
	LDA_ABSY = 0xB9,
	LDA_INDX = 0xA1,
	LDA_INDY = 0xB1
};

/* INS_LDA */
void INS_LDA_IM(struct cpu *cpu, struct memory *ram, i64 *cycles);
void INS_LDA_ZP(struct cpu *cpu, struct memory *ram, i64 *cycles);
void INS_LDA_ZPX(struct cpu *cpu, struct memory *ram, i64 *cycles);
void INS_LDA_ABS(struct cpu *cpu, struct memory *ram, i64 *cycles);
void INS_LDA_ABSX(struct cpu *cpu, struct memory *ram, i64 *cycles);
void INS_LDA_ABSY(struct cpu *cpu, struct memory *ram, i64 *cycles);
void INS_LDA_INDX(struct cpu *cpu, struct memory *ram, i64 *cycles);
void INS_LDA_INDY(struct cpu *cpu, struct memory *ram, i64 *cycles);

#endif
