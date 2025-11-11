/* Aidan Garske
 * CSC 60 - Spring 2025
 * 11/11/2025
 */

#include "../../include/lab10.h"

/*
 * printStudentReport - Prints student records in forward or reverse order
 * Parameters:
 *   direction - FORWARD (head to tail) or REVERSE (tail to head)
 */
void printStudentReport(direction_t direction) {
    node_t *current;
    
    printf("\nRunning Student Report:\n");
    
    if (direction == FORWARD) {
        printf("=== Student report [Forward]===\n");
        current = listHead;
        
        /* Traverse from head to tail */
        while (current != NULL) {
            printf("ID: %d\tName: %s %s\n", 
                   current->s_ID, current->s_FName, current->s_LName);
            printf("Major Code: %d;\tExpected Grad: %s\n",
                   current->s_major, current->s_gradSem);
            current = current->next;
        }
    } else {  /* REVERSE */
        printf("=== Student report [Reverse]===\n");
        current = listTail;
        
        /* Traverse from tail to head */
        while (current != NULL) {
            printf("ID: %d\tName: %s %s\n", 
                   current->s_ID, current->s_FName, current->s_LName);
            printf("Major Code: %d;\tExpected Grad: %s\n",
                   current->s_major, current->s_gradSem);
            current = current->prev;
        }
    }
}
