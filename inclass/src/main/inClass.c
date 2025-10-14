#include <stdio.h>
#include <stdlib.h>

#include "inClass.h"

int main(int argc, char *argv[]) {

if (argc < 2) {
    fprintf(stderr, "Too few arguments!\n");
    fprintf(stderr, "Usage: %s <input file>\n", argv[0]);
    exit(EXIT_FAILURE);
}

// Process the data file
if ( processFile(argv[1]) != 0) {
    perror("Process file failed");
    exit(EXIT_FAILURE);
}

// Print the summary report

exit(EXIT_SUCCESS);
}
