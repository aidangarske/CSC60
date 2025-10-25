/* lab8.c
 * Aidan Garske
 * CSC 60 fall 2025
 * 10/25/25
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> /* For ptrdiff_t */
#include <string.h>

void printElementsForward(size_t size, char *arr) {
    printf("Array in forward direction:");
    for (size_t i = 0; i < size; ++i) {
        printf(" %c", arr[i]);
    }
    printf("\n");
}

void printElementsReversed(size_t size, char *arr) {
    printf("Array in reverse direction:");
    char *p = arr + size - 1;
    for (size_t i = 0; i < size; ++i) {
        printf(" %c", *(p - i));
    }
    printf("\n");
}

char* findMiddleElement(char *arr, size_t size) {
    return arr + (size / 2);
}

int main(int argc, char *argv[]) {
    char default_letters[] = { 'm','n','o','p','q','r','s','t','u' };
    char *letters = NULL;
    size_t size = 0;

    if (argc >= 2 && argv[1] != NULL && argv[1][0] != '\0') {
        /* Use the provided string from the command line */
        size = strlen(argv[1]);
        /* Allocate buffer and copy the characters */
        letters = malloc(size);
        if (!letters) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }
        memcpy(letters, argv[1], size);
    } else {
        /* If none provided use the default arr */
        letters = default_letters;
        size = sizeof(default_letters) / sizeof(default_letters[0]);
    }

    /* Print the elements in both directions */
    printElementsForward(size, letters);
    printElementsReversed(size, letters);

    char *mid = findMiddleElement(letters, size);
    ptrdiff_t offset = mid - letters; /* bytes from array beginning */
    printf("The middle element is '%c' and its address is %td bytes "
           "from the array beginning\n", *mid, offset);

    /* Free only if we allocated ie. not default_letters */
    if (argc >= 2 && letters != NULL && argv[1] != NULL) {
        if (letters != default_letters) {
            free(letters);
        }
    }

    return 0;
}
