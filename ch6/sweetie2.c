// sweetie2.c -- a counting loop using for
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++) {
        printf("Be my Valentine!\n");
    }
    
    return EXIT_SUCCESS;
}