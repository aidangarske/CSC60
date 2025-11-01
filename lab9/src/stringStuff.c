/* stringStuff.c
 * Aidan Garske
 * CSC 60 Fall 2025
 * 11/1/2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/lab9.h"

void doStringStuff(void) {
    printf("String Stuff ===\n");

    /* 1) From first comma to end */
    const char *s = "This here string here is a mighty good string, and Jimmy likes it a lot";
    const char *comma = strchr(s, ',');
    printf("1) %s\n", comma ? comma : "");

    /* 2) Copy first 16 chars into 20-byte buffer */
    char *buf = (char *)malloc(20);
    if (!buf) {
        fprintf(stderr, "malloc failed in doStringStuff\n");
        return;
    }
    memset(buf, 0, 20);
    strncpy(buf, s, 16);
    buf[16] = '\0';
    printf("2) %s\n", buf);

    /* 3) Length of the string */
    size_t len = strlen(s);
    printf("3) length = %zu\n", len);

    /* 4) strcmp(str, buf) */
    int c1 = strcmp(s, buf);
    printf("4) compare str and buf = %d\n", c1);

    /* 5) strcmp(buf, str) */
    int c2 = strcmp(buf, s);
    printf("5) compare buf and str = %d\n", c2);

    /* 6) strncmp first 10 chars */
    int c3 = strncmp(s, buf, 10);
    printf("6) compare 1st 10 chars = %d\n", c3);

    if (buf != NULL) {
        free(buf);
    }
}
