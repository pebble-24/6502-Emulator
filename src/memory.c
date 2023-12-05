#include "memory.h"

void memory_clear(struct memory *memory)
{
	for (int i = 0; i < MAX_MEMORY_SIZE; i++) {
		memory->data[i] = 0x00;
	}
}

/* Memory IO */
byte memory_read_byte(struct memory *memory,  u16 index)
{
	return memory->data[index];
}

word memory_read_word(struct memory *memory,  u16 index)
{
	word result = memory_read_byte(memory, index);
	result |= (memory_read_byte(memory, index + 1) << 8);
	return result;
}

// TODO Implement memory write functions
void memory_write_byte(struct memory *memory, u16 index)
{

}

void memory_write_word(struct memory *memory, u16 index)
{

}

/* Fetch */
byte memory_fetch_byte(struct memory *memory,  u16 index, i64 *cycles)
{
	(*cycles)--;
	return memory_read_byte(memory, index);
}

word memory_fetch_word(struct memory *memory,  u16 index, i64 *cycles)
{
	(*cycles) -= 2;
	return memory_read_word(memory, index);
}