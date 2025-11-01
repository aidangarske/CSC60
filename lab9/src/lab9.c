/* lab9.c
 * Aidan Garske
 * CSC 60 Fall 2025
 * 11/1/2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/lab9.h"

static void freeEmp(emp_t *p) {
    if (!p) return;
    free(p->name);
}

int main(void) {
    printf("Lab9 - Dynamic Memory Strings and Structs\n");

    /* First record: dynamically allocated struct (and name) */
    printf("Please enter the employee data:\n");
    emp_t *dyn = getEmpData();
    if (!dyn) {
        fprintf(stderr, "Failed to create dynamic employee record\n");
        return 1;
    }
    printEmpRecord(*dyn);
    freeEmp(dyn);
    free(dyn);

    /* Second record: statically allocated struct and name dynamically allocated */
    printf("Please enter the employee data:\n");
    emp_t *tmp = getEmpData();
    if (!tmp) {
        fprintf(stderr, "Failed to create static employee record (input)\n");
        return 1;
    }
    emp_t stat = *tmp;   /* copy fields keep name pointer */
    free(tmp);           /* only free the struct not the name */
    printEmpRecord(stat);
    freeEmp(&stat);      /* now free the name */

    /* Part 2: string functions */
    doStringStuff();

    return 0;
}
