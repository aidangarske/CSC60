/* Aidan Garske
 * CSC 60 - Spring 2025
 * 11/11/2025
 */

#include <stdio.h>
#include <string.h>

#include "../../include/lab10.h"

void setStudentInfo(int sNum, node_t *studNode) {

    switch (sNum) {
	case 0:
	    studNode->s_ID = 3564;
	    studNode->s_FName = strdup("Jimmy");
	    studNode->s_LName =strdup("Smith");
	    studNode->s_major = 42;
	    studNode->s_gradSem = strdup("Spr2026");
	    break;
	case 1:
	    studNode->s_ID = 4357;
	    studNode->s_FName = strdup("Samuel");
	    studNode->s_LName =strdup("Johnson");
	    studNode->s_major = 73;
	    studNode->s_gradSem = strdup("Fall2026");
	    break;
	case 2:
	    studNode->s_ID = 7775;
	    studNode->s_FName = strdup("Betty");
	    studNode->s_LName =strdup("Boop");
	    studNode->s_major = 0;
	    studNode->s_gradSem = strdup("Spr2027");
	    break;
	case 3:
	    studNode->s_ID = 6578;
	    studNode->s_FName = strdup("Bob");
	    studNode->s_LName =strdup("Jackson");
	    studNode->s_major = 37;
	    studNode->s_gradSem = strdup("Fall2026");
	    break;
	default:
	    fprintf(stderr, "Unknown Student %d\n", sNum);
    }

    studNode->next = NULL;
    studNode->prev = NULL;
}
