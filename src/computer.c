#include "computer.h"

void run(struct cpu *cpu, struct memory *ram, bool useCycles, i64 *cycles)
{
    if (useCycles == true) {
        run_limited(cpu, ram, cycles);
    } else {
        run_unlimited(cpu, ram);
    }
}

void run_limited(struct cpu *cpu, struct memory *ram, i64 *cycles)
{
    while ((*cycles) > 0) {
        /* Fetch */
        byte instruction_opcode = memory_fetch_byte();

        /* Decode and Execute */
        instructions[instruction_opcode](cpu, ram, cycles);

    }
}

void run_unlimited(struct cpu *cpu, struct memory *ram)
{
    /* When running unlimited need to call each instruction with a cycles 
     * that gets updated but deleted? 
     */
    while (1) {
        /* Fetch */
        byte instruction_opcode = memory_fetch_byte();
        
        i64 cycles = 8; /* All instructions take 7 cycles or less */

        /* Decode and Execute */
        instructions[instruction_opcode](cpu, ram, &cycles);

    }
}