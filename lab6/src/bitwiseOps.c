/* bitwiseOps.c
 * Aidan Garske
 * CSC-60 Lab6 Fall25
 */

#include "../include/lab6.h"

#define MASK 0x0220u

int isBit5Set(unsigned int num) {
    /* 5th bit from right means index 4 */
    return (num & (1u << 4)) ? 1 : 0;
}

unsigned int maskIt(unsigned int num) {
    return num | MASK;
}

unsigned int shiftItLeft(unsigned int num, int bits) {
    return num << bits;
}

unsigned int shiftItRight(unsigned int num, int bits) {
    return num >> bits;
}
