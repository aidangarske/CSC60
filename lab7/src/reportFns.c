/* reportFns.c
 *
 * Aidan Garske
 * CSC 60
 * Fall 2025
 */

#include "../include/lab7.h"

void printReport(void) {
    FILE *reportFile;

    /* Open the report file for writing using fopen() */
    reportFile = fopen(REPORT_FILE, "w");
    if (reportFile == NULL) {
        fprintf(stderr, "Error opening report file '%s': %s\n", 
                REPORT_FILE, strerror(errno));
        exit(1);
    }

    /* Write to the report content */
    fprintf(reportFile, "Pest Observation Report\n\n");
    fprintf(reportFile, "The breakdown of pests observed:\n\n");
    fprintf(reportFile, "Level 1 pests count - %d\n", level1Count);
    fprintf(reportFile, "Level 2 pests count - %d\n", level2Count);
    fprintf(reportFile, "Level 3 pests count - %d\n", level3Count);

    /* Close the report file */
    if (fclose(reportFile) != 0) {
        fprintf(stderr, "Error closing report file: %s\n", strerror(errno));
        exit(1);
    }
}
