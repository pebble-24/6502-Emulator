#ifndef MEMORY_H
#define MEMORY_H

#include "types.h"

#define MAX_MEMORY_SIZE 65536 /* 2^16 for the 16 bit address space of a 6502 */

struct memory {
	u8 data[MAX_MEMORY_SIZE];
};

/* Memory IO */
byte memory_read_byte(struct memory *memory,  u16 index);
word memory_read_word(struct memory *memory,  u16 index);
void memory_write_byte(struct memory *memory, u16 index);
void memory_write_word(struct memory *memory, u16 index);

/* Fetch */
byte memory_fetch_byte(struct memory *memory,  u16 index, u64 *cycles);
word memory_fetch_word(struct memory *memory,  u16 index, u64 *cycles);

void memory_clear(struct memory *memory);

#endif