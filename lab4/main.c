/* main.c
 * 
 * Lab 4
 * Aidan Garske
 * 9/21/2025
 */

#include <stdio.h>

/* Function declarations */
int fun1(int num);
int fun2(int num);
float fun3(int num);

int main(int argc, char *argv[]) {
    /* Check for command line parameter - must be at least 2 args */
    if (argc < 2) {
        printf("Usage: ./lab4 <param>\n");
        return 1;
    }
    
    /* Debug for command params */
    printf("Running program \"%s\" with parameter \"%s\"\n", argv[0], argv[1]);
    
    int num; 
    
    /* Main loop */
    while (1) {
        printf("Enter an integer: ");
        scanf("%i", &num);
        
        /* Check for exit condition */
        if (num == 0) {
            break;
        }
        
        printf("Using number %d\n", num);
        
        /* Call the three functions and print results */
        printf("The square of %d is %06d\n", num, fun1(num));
        printf("The next num is %06d\n", fun2(num));
        printf("The half of %d is %6.2f\n", num, fun3(num));
    }
    
    return 0;
}
