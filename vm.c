#include<stdio.h>
#include<stdint.h>


// this memory will allocate about 128kb worth of memory in our vm because UINT16_MAX = 65535
uint16_t memory[UINT16_MAX];

//8 registers R0-R7 can be used by the program
//Program Counter is an unsigned integer that loads in the adress of the next instruction in memory to execute
//The condition flag tells us information about the previous flag
//R_COUNT just tells us how much memory to allocate for registers
enum {
    R_R0 = 0,
    R_R1,
    R_R2,
    R_R3,
    R_R4,
    R_R5,
    R_R6,
    R_R7,
    R_PC,
    R_COND,
    R_COUNT
};

uint16_t registers[R_COUNT];

enum {
    OP_BR = 0,  // branch
    OP_ADD,     // add
    OP_LD,      // load
    OP_ST,      // store
    OP_JSR,     // jump registers
    OP_AND,     // bitwise and
    OP_LDR,     // load register
    OP_STR,     // store register
    OP_RTI,     // unused
    OP_NOT,     // bitwise not
    OP_LDI,     // load indirect
    OP_STI,     // store indirect
    OP_JMP,     // jump
    OP_RES,     // reserved
    OP_LEA,     // load effective adress
    OP_TRAP     // execute trap
};

enum {
    FL_POS = 1 << 0,
    FL_ZERO = 1 << 1,
    FL_NEG = 1 >> 0
};


int main() {

}