/* Aidan Garske
 * CSC 60 - Spring 2025
 * 11/11/2025
 */

#include "../../include/lab10.h"

/* Global list pointers */
node_t *listHead = NULL;
node_t *listTail = NULL;

/* students to load */
#define NUM_STUDENTS 4

/*
 * loadStudentList - Creates nodes and loads student data into a doubly linked list
 * Adds nodes to the front of the list (each new node becomes the head)
 */
void loadStudentList(void) {
    int i;
    node_t *newNode;
    
    /* Load students in order (0 to NUM_STUDENTS-1) */
    /* Adding to front means last one added should become the head */
    for (i = 0; i < NUM_STUDENTS; i++) {
        /* Allocate memory for new node */
        newNode = (node_t *)malloc(sizeof(node_t));
        if (newNode == NULL) {
            fprintf(stderr, "Error: Failed to allocate memory for node\n");
            exit(1);
        }
        
        /* Set the student information using provided function */
        setStudentInfo(i, newNode);
        
        /* Add node to front of list */
        if (listHead == NULL) {
            /* First node - initialize both head and tail */
            listHead = newNode;
            listTail = newNode;
            newNode->prev = NULL;
            newNode->next = NULL;
        } else {
            /* Add to front of list */
            newNode->next = listHead;
            newNode->prev = NULL;
            listHead->prev = newNode;
            listHead = newNode;
        }
    }
}
