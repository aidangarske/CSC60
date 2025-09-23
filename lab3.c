/* Lab3 
 * Aidan Garske
 * 9/14/2025
 */

#include <stdio.h>

int main() {
    int n;

    /* Prompt the user to enter num */
    printf("Enter a number [decimal, octal, or hex]: ");
    scanf("%i", &n);
    printf("\n");

    /* FOR LOOP */
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue; /* Skip even nums */
        }
        printf("For %d\n", i);
    }
    printf("\n");

    
    /* WHILE LOOP */
    int i = 1;
    while (i <= n && i <= 7) {
        printf("While %d\n", i);
        i++;
    }
    printf("\n");

    /* DO-WHILE LOOP */
    i = 1;
    do {
        printf("Do-While %d\n", i);
        i++;
    } while (i <= n);

    return 0;
}

