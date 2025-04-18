/* add_one.c -- incrementing: prefix and postfix */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int ultra = 0;
    int super = 0;

    while(super < 5) {
        // super++;
        // ++ultra;
        printf("super = %d, ultra = %d \n", super++, ++ultra);
    }

    return EXIT_SUCCESS;
}