/* sweetie1.c -- a counting loop */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const int NUMBER = 22;
    // initialization
    int count = 1;

    // test
    while (count <= NUMBER) {
        // action
        printf("Be my Valentine!\n");
        // update count 
        count++;
    }
    
    return EXIT_SUCCESS;
}