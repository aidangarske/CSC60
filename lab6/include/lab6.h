/* lab6.h
 * Aidan Garske
 * CSC-60 Lab6 Fall25
 */

#ifndef LAB6_H
#define LAB6_H

#include <stdio.h>

/* convUtils.c */
char* dToB(int n);

/* bitwiseOps.c */
int isBit5Set(unsigned int num);
unsigned int maskIt(unsigned int num);
unsigned int shiftItLeft(unsigned int num, int bits);
unsigned int shiftItRight(unsigned int num, int bits);

#endif /* LAB6_H */
