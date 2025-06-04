/* lesser.c -- finds the lesser of two evils */
#include <stdio.h>
#include <stdlib.h>

int imin(int, int);

int main(int argc, char **argv)
{
    int evil1;
    int evil2;

    printf("Enter a pair of integers (q to quit):\n");

    while (scanf("%d %d", &evil1, &evil2) == 2) {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }

    printf("Bye.\n");
    
    return EXIT_SUCCESS;
}

int imin(int n, int m)
{
    int min;

    if (n < m) {
        min = n;
    } else {
        min = m;
    }

    return min;

#if 0
    return (n < m) ? n : m;
#endif
}