#include <stdio.h>
#include <stdbool.h>

#include "computer.h"
#include "memory.h"
#include "cpu.h"
#include "instructions.h"

int main(int argc, char **argv)
{
	struct cpu CPU;
	struct memory RAM;
	
	run(&CPU, &RAM, true, 1);

	return 0;
}