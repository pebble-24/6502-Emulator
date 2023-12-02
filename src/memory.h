#ifndef MEMORY_H
#define MEMORY_H

#include "types.h"

#define MAX_MEMORY_SIZE 65536 /* 2^16 for the 16 bit address space of a 6502 */

struct memory {
	u8 data[MAX_MEMORY_SIZE];
};

void memory_clear(struct memory *memory);

#endif