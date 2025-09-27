/* main.c
 * Aidan Garske
 * CSC 60 fall 2025
 * 9/27/25
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab5.h"
#include "utils.h"
    
int main(int argc, char *argv[]) {
    int firstNum;
    int lastNum;

    if (argc < 2) {
        printf("Usage: <prog name> [arg]\n");
        return 1;
    }
    printf("Running %s with %s\n", argv[0], argv[1]);
    printf(TITLE);

    printHeader();

    while (1) {
        /* Terminate when 0 0 is entered */
        printf("Enter first number: ");
        scanf("%d", &firstNum);
        printf("Enter last number: ");
        scanf("%d", &lastNum);

        if (firstNum == 0 && lastNum == 0) {
            break;
        }

        int range = getRange(firstNum, lastNum);
        printColumnHeaders();
        printDataLine(firstNum, lastNum, range);
    }

    printf("Exiting program.\n");
    return 0;
}
