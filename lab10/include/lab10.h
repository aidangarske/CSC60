/* Aidan Garske
 * CSC 60 - Spring 2025
 * 11/11/2025
 */

#ifndef LAB10_H
#define LAB10_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

/* Title line for program */
#define TITLE_LINE "CSc60 Lab10: Linked Lists, Environment Vars & Signals"

/* Major codes enum */
typedef enum {
    UNDEC = 0,
    ENG = 37,
    CS = 42,
    MATH = 49
} major_t;

/* Node structure for doubly linked list */
typedef struct node {
    int s_ID;
    char *s_FName;
    char *s_LName;
    int s_major;
    char *s_gradSem;
    struct node *prev;
    struct node *next;
} node_t;

/* Direction enum for report printing */
typedef enum {
    FORWARD,
    REVERSE
} direction_t;

/* External declarations for global list pointers */
extern node_t *listHead;
extern node_t *listTail;

/* Function declarations from studUtils.c */
void loadStudentList(void);
void setStudentInfo(int sNum, node_t *studNode);

/* Function declarations from reports.c */
void printStudentReport(direction_t direction);

/* Function declarations from sigUtils.c */
void setupSignalHandlers(void);

#endif /* LAB10_H */

