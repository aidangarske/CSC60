/* lab9.h
 * Aidan Garske
 * CSC 60 Fall 2025
 * 11/1/2025
 */

#ifndef LAB9_H
#define LAB9_H

#include <stddef.h> /* size_t */

/* Macros per spec */
#define MAXNMLEN 50
#define NUMEMPS  5

/* Typedefs */
typedef int empid_t;
typedef int deptid_t;

/* DOB sub-struct */
typedef struct {
    int month;
    int day;
    int year;
} dob_t;

/* Employee record */
typedef struct {
    empid_t id;
    char *name; /* dynamically allocated size */
    dob_t dob;
    deptid_t dept;
} emp_t;

/* utils */
emp_t *getEmpData(void);
void printEmpRecord(emp_t emp);

/* string stuff */
void doStringStuff(void);

#endif /* LAB9_H */
