/* utils.c
 *
 * Aidan Garske
 * CSC 60
 * Fall 2025
 */

#include "../include/lab7.h"

/* Global level counters */
int level1Count = 0;
int level2Count = 0;
int level3Count = 0;

/* Number of pest types */
#define NUM_PESTS 10

void processFile(const char *filename) {
    int fd;
    pest_t pest;
    int pestCounts[NUM_PESTS] = {0};  /* Array to count each pest type */
    ssize_t bytesRead;

    /* Open the input data file using open() system call */
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error opening file '%s': %s (errno=%d)\n", 
                filename, strerror(errno), errno);
        exit(1);
    }

    /* Read integers from the file and count each pest type */
    while ((bytesRead = read(fd, &pest, sizeof(pest_t))) > 0) {
        if (bytesRead != sizeof(pest_t)) {
            fprintf(stderr, "Warning: Incomplete read from file\n");
            break;
        }

        /* Validate pest ID and increment counter */
        if (pest >= 0 && pest < NUM_PESTS) {
            pestCounts[pest]++;
        } else {
            fprintf(stderr, "Warning: Invalid pest ID %d encountered\n", pest);
        }
    }

    /* Check for read errors */
    if (bytesRead == -1) {
        fprintf(stderr, "Error reading file: %s (errno=%d)\n", 
                strerror(errno), errno);
        close(fd);
        exit(1);
    }

    /* Close the input file */
    if (close(fd) == -1) {
        fprintf(stderr, "Error closing file: %s (errno=%d)\n", 
                strerror(errno), errno);
        exit(1);
    }

    /* Calculate level counts based on pest type counts */
    /* Level 1: aphid(0), whitefly(1), cutworm(5) */
    level1Count = pestCounts[aphid] + pestCounts[whitefly] + pestCounts[cutworm];

    /* Level 2: scale(2), caterpillar(3), beetle(4), slug(6) */
    level2Count = pestCounts[scale] + pestCounts[caterpillar] + 
                  pestCounts[beetle] + pestCounts[slug];

    /* Level 3: gopher(7), racoon(8), possum(9) */
    level3Count = pestCounts[gopher] + pestCounts[racoon] + pestCounts[possum];
}
