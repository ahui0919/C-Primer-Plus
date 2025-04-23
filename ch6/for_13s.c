/* for_13s.c */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    // count by 13s from 2
    int n;

    for (n = 2; n < 60; n = n + 13) {
        printf("%d \n", n);
    }

    return EXIT_SUCCESS;
}