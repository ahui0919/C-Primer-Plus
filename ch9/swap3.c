/* swap3.c -- using pointers to make swapping work */
#include <stdio.h>
#include <stdlib.h>

void interchange(int *u, int *v);

int main(int argc, char **argv)
{
    int x = 5;
    int y = 10;

    printf("Originally, x = %d and y = %d.\n", x, y);

    /* send addresses to function */
    interchange(&x, &y);

    printf("Now, x = %d and y = %d.\n", x, y);

    return EXIT_SUCCESS;
}

void interchange(int *u, int *v)
{
    int temp;

    /* temp gets value that u points to */
    temp = *u; 
    *u = *v;   
    *v = temp; 

    return;
}