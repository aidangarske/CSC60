/* Aidan Garske
 * CSC 60 - Spring 2025
 * 11/11/2025
 */

#include "../../include/lab10.h"

int main(int argc, char *argv[]) {
    char *lab10Value;
    
    /* Print title line */
    printf("%s\n", TITLE_LINE);
    fflush(stdout);
    
    /* Part 1: Load and display student records */
    loadStudentList();
    
    /* Print student report in forward direction */
    printStudentReport(FORWARD);
    
    /* Print student report in reverse direction */
    printStudentReport(REVERSE);
    
    /* Part 2: Signal handling */
    printf("\nStarting signal test loop [%d]\n", getpid());
    fflush(stdout);
    
    /* Get and print current value of LAB10 environment variable */
    lab10Value = getenv("LAB10");
    printf("Current setting of LAB10\": %s\n", lab10Value ? lab10Value : "(not set)");
    fflush(stdout);
    
    /* Update LAB10 environment variable to "YOYO" */
    setenv("LAB10", "YOYO", 1);
    
    /* Get and print updated value */
    lab10Value = getenv("LAB10");
    printf("Updated setting of LAB10\": %s\n", lab10Value ? lab10Value : "(not set)");
    fflush(stdout);
    
    /* Setup signal handlers */
    setupSignalHandlers();
    
    /* Infinite loop - print LAB10 value periodically */
    while (1) {
        sleep(10);
        lab10Value = getenv("LAB10");
        printf("Looping: LAB10 is \"%s\"\n", lab10Value ? lab10Value : "(not set)");
        fflush(stdout);
    }
    
    return 0;
}
