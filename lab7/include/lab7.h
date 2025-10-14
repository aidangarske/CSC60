/* Aidan Garske
 * CSC 60
 * Fall 2025
 */

#ifndef LAB7_H
#define LAB7_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

/* Define the report file name */
#define REPORT_FILE "levelCountReport.txt"

/* Enum for the pest types */
enum {aphid, whitefly, scale, caterpillar, beetle, cutworm, slug, gopher, racoon, possum};

/* Typedef for pest enum */
typedef int pest_t;

/* Global level counters (accessed from reportFns.c) */
extern int level1Count;
extern int level2Count;
extern int level3Count;

/* Function declarations */
void processFile(const char *filename);
void printReport(void);

#endif /* LAB7_H */
