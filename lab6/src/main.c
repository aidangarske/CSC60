/* main.c
 * Aidan Garske
 * CSC-60 Lab6 Fall25
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/lab6.h"

int main(int argc, char *argv[]) {
    FILE *in = NULL;
    FILE *out = NULL;
    char *bin = NULL;

    /* Command line arg checks */
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input-data-file>\n", argv[0]);
        return 1;
    }
    in = fopen(argv[1], "r");
    if (!in) {
        fprintf(stderr, "Error: cannot open in file '%s'\n", argv[1]);
        return 2;
    }
    out = fopen("lab6.out", "w");
    if (!out) {
        fprintf(stderr, "Error: cannot open out file lab6.out\n");
        fclose(in);
        return 3;
    }

    int value;
    while (fscanf(in, "%d", &value) == 1) {
        /* Convert to unsigned for bitwise operations */
        unsigned int uval = (unsigned int)value;
        /* Print the header info */
        fprintf(out, "Read data: %d [0x%04x]\n", value, uval);

        /* Print binary */
        bin = dToB(value);
        if (bin) {
            fprintf(out, "%-12s%s\n", "In Binary:", bin);
            free(bin);
            bin = NULL;
        } else {
            fprintf(out, "%-12s <allocation failed>\n", "In Binary:");
        }

        /* Mask the bits */
        unsigned int masked = maskIt(uval);
        bin = dToB((int)masked);
        fprintf(out, "%-12s%s\n", "MaskIt:", bin ? bin : "<alloc fail>");
        free(bin); bin = NULL;

        /* Shift left by 3 */
        unsigned int sl = shiftItLeft(uval, 3);
        bin = dToB((int)sl);
        fprintf(out, "%-12s%s\n", "ShiftLeft:", bin ? bin : "<alloc fail>");
        free(bin); bin = NULL;

        /* Shift right by 3 */
        unsigned int sr = shiftItRight(uval, 3);
        bin = dToB((int)sr);
        fprintf(out, "%-12s%s\n", "ShiftRight:", bin ? bin : "<alloc fail>");
        free(bin); bin = NULL;

        /* Print the status of bit 5 */
        if (isBit5Set(uval)) {
            fprintf(out, "Bit 5 is     set\n\n");
        } else {
            fprintf(out, "Bit 5 is NOT set\n\n");
        }
    }

    /* Cleanup files */
    fclose(in);
    fclose(out);

    return 0;
}
