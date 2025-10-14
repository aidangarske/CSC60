/* lab7.c
 *
 * Aidan Garske
 * CSC 60
 * Fall 2025
 */

#include "../include/lab7.h"

int main(int argc, char *argv[]) {
    /* Validate command line arguments */
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_data_file>\n", argv[0]);
        return 1;
    }

    /* Process the input data file */
    processFile(argv[1]);

    /* Print the report */
    printReport();

    return 0;
}
