/* for_cube.c -- using a for loop to make a table of cubes */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int num;

    printf("    n   n cubed\n");
    for (num = 1; num <= 6; num++) {
        printf("%5d %5d\n", num, num*num*num);
    }
    
    return EXIT_SUCCESS;
}