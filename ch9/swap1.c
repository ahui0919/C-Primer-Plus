/* swap1.c --first attempt at a swapping function */
#include <stdio.h>
#include <stdlib.h>

/* declare function */
void interchange(int u, int v);

int main(int argc, char **argv)
{
    int x = 5;
    int y = 10;

    printf("Originally, x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now, x = %d and y = %d.\n", x, y);

    return EXIT_SUCCESS;
}

/* define function */
void interchange(int u, int v)
{
    int temp;

    temp = u;
    u = v;
    v = temp;

    return;
}   