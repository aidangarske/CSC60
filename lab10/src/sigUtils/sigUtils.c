/* Aidan Garske
 * CSC 60 - Spring 2025
 * 11/11/2025
 */

#include "../../include/lab10.h"

/*
 * Signal handler for SIGUSR1
 * Updates the LAB10 environment variable to "UPDATED_USR1"
 */
void handleSIGUSR1(int signum) {
    char msg[100];
    int len;

    /* Use write() for signal-safe output */
    len = snprintf(msg, sizeof(msg), "PID [%d] caught sig %d\n", getpid(), signum);
    write(STDOUT_FILENO, msg, len);

    len = snprintf(msg, sizeof(msg), "Handling SIGUSR1...\n");
    write(STDOUT_FILENO, msg, len);

    /* Update environment variable */
    setenv("LAB10", "UPDATED_USR1", 1);
}

/*
 * Signal handler for SIGUSR2
 * Updates the LAB10 environment variable to "UPDATED_USR2"
 */
void handleSIGUSR2(int signum) {
    char msg[100];
    int len;

    /* Use write() for signal-safe output */
    len = snprintf(msg, sizeof(msg), "PID [%d] caught sig %d\n", getpid(), signum);
    write(STDOUT_FILENO, msg, len);

    len = snprintf(msg, sizeof(msg), "Handling SIGUSR2...\n");
    write(STDOUT_FILENO, msg, len);

    /* Update environment variable */
    setenv("LAB10", "UPDATED_USR2", 1);
}

/*
 * setupSignalHandlers - Configures signal handlers for SIGUSR1, SIGUSR2
 * and ignores SIGINT
 */
void setupSignalHandlers(void) {
    struct sigaction sa_usr1, sa_usr2;

    /* Set up SIGUSR1 handler */
    memset(&sa_usr1, 0, sizeof(sa_usr1));
    sa_usr1.sa_handler = handleSIGUSR1;
    sigemptyset(&sa_usr1.sa_mask);
    sa_usr1.sa_flags = SA_RESTART;

    if (sigaction(SIGUSR1, &sa_usr1, NULL) == -1) {
        perror("Error setting up SIGUSR1 handler");
        exit(1);
    }

    /* Set up SIGUSR2 handler */
    memset(&sa_usr2, 0, sizeof(sa_usr2));
    sa_usr2.sa_handler = handleSIGUSR2;
    sigemptyset(&sa_usr2.sa_mask);
    sa_usr2.sa_flags = SA_RESTART;

    if (sigaction(SIGUSR2, &sa_usr2, NULL) == -1) {
        perror("Error setting up SIGUSR2 handler");
        exit(1);
    }

    /* Ignore SIGINT */
    if (signal(SIGINT, SIG_IGN) == SIG_ERR) {
        perror("Error ignoring SIGINT");
        exit(1);
    }
}
