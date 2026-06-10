/* pnt_add.c -- pointer addition */
#include <stdio.h> 
#include <stdlib.h>

#define SIZE 4

int main(int argc, char **argv)
{
    short dates [SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;

    /* assign address of array to pointer */
    pti = dates;
    ptf = bills;
    printf("%23s %15s\n", "short", "double");

    for (index = 0; index < SIZE; index++) {
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    }

    return EXIT_SUCCESS;
}