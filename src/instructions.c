#include "instructions.h"

extern void (*instructions[256])(struct cpu *cpu, struct memory *ram,
				 i64 *cycles) = {
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, INS_LDA_INDX, NULL, NULL, NULL, INS_LDA_ZP,   NULL, NULL,
	NULL, INS_LDA_IM,   NULL, NULL, NULL, INS_LDA_ABS,  NULL, NULL,
	NULL, INS_LDA_INDY, NULL, NULL, NULL, INS_LDA_ZPX,  NULL, NULL,
	NULL, INS_LDA_ABSY, NULL, NULL, NULL, INS_LDA_ABSX, NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL,
	NULL, NULL,	    NULL, NULL, NULL, NULL,	    NULL, NULL
};

// TODO Implement INS_LDA functions
void INS_LDA_IM(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
}

void INS_LDA_ZP(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
}

void INS_LDA_ZPX(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
}

void INS_LDA_ABS(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
}

void INS_LDA_ABSX(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
}

void INS_LDA_ABSY(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
}

void INS_LDA_INDX(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
}

void INS_LDA_INDY(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
}
