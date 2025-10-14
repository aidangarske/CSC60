#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int processFile(char *filename) {
    int inputFD;
    printf("Processing file: %s\n", filename);
    #define O_RDONLY 0

    if (inputFD = open(filename, O_RDONLY) < 0 ) {
        perror("Error opening file");
        return(EXIT_FAILURE);
    }

    int readVal;
    int ret;
    while ((ret = read(inputFD, &readVal, sizeof(int))) > 0) {
        printf("Read value: %d\n", readVal);
    }
    if (ret < 0) {
        perror("Error reading file");
        close(inputFD);
        return(EXIT_FAILURE);
    }

    return(EXIT_SUCCESS);
}
