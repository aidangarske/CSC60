/* lab9Utils.c
 * Aidan Garske
 * CSC 60 Fall 2025
 * 11/1/2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "../include/lab9.h"

static void flush_prompt(void) { fflush(stdout); }

static void discard_line(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { /* discard */ }
}

static int read_line(char *buf, size_t cap) {
    if (!fgets(buf, (int)cap, stdin)) return 0;
    size_t n = strlen(buf);
    if (n && buf[n - 1] == '\n') buf[n - 1] = '\0';
    return 1;
}

emp_t *getEmpData(void) {
    emp_t *rec = (emp_t *)malloc(sizeof(emp_t));
    if (!rec) {
        fprintf(stderr, "malloc failed for emp_t: %s\n", strerror(errno));
        return NULL;
    }
    memset(rec, 0, sizeof(*rec));

    /* ID */
    printf("ID: "); flush_prompt();
    if (scanf("%d", &rec->id) != 1) {
        fprintf(stderr, "Invalid ID input\n");
        free(rec);
        return NULL;
    }
    discard_line();

    /* Name */
    char tmpName[MAXNMLEN + 4] = {0};
    printf("Name: "); flush_prompt();
    if (!read_line(tmpName, sizeof(tmpName)) || tmpName[0] == '\0') {
        fprintf(stderr, "Invalid Name input\n");
        free(rec);
        return NULL;
    }
    size_t nameLen = strlen(tmpName);
    rec->name = (char *)malloc(nameLen + 1);
    if (!rec->name) {
        fprintf(stderr, "malloc failed for name: %s\n", strerror(errno));
        free(rec);
        return NULL;
    }
    memcpy(rec->name, tmpName, nameLen + 1);

    /* DOB */
    printf("DOB (MM/DD/YYYY): "); flush_prompt();
    if (scanf("%d/%d/%d", &rec->dob.month, &rec->dob.day, &rec->dob.year) != 3) {
        fprintf(stderr, "Invalid DOB input\n");
        free(rec->name);
        free(rec);
        discard_line();
        return NULL;
    }
    discard_line();

    /* Department */
    printf("Department ID: "); flush_prompt();
    if (scanf("%d", &rec->dept) != 1) {
        fprintf(stderr, "Invalid Department ID input\n");
        free(rec->name);
        free(rec);
        return NULL;
    }
    discard_line();

    return rec;
}

void printEmpRecord(emp_t empRec) {
    printf("ID: %d\n", empRec.id);
    printf("Name: %s\n", empRec.name ? empRec.name : "(null)");
    printf("DOB: %02d/%02d/%04d\n", empRec.dob.month, empRec.dob.day, empRec.dob.year);
    printf("Dept: %d\n", empRec.dept);
}
