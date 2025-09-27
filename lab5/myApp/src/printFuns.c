/* printFuns.c
 * Aidan Garske
 * CSC 60 fall 2025
 * 9/27/25
*/

#include <stdio.h>

/* Function to print the column headers */
void printColumnHeaders() {
    printf("\n1st Num 2nd Num # between\n");
    printf("-------- -------- ---------\n");
}

/* Function to print the header */
void printHeader() {
    printf("The count of integers in a range:\n");
    printColumnHeaders();
}

/* Function to print a formatted line of data */
void printDataLine(int fNum, int lNum, int range) {
    printf("   %3d     %3d      %2d\n", fNum, lNum, range);
}
