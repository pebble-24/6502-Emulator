#include "memory.h"

void memory_clear(struct memory *memory)
{
	for (int i = 0; i < MAX_MEMORY_SIZE; i++) {
		memory->data[i] = 0x00;
	}
}
