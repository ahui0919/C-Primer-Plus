#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(int argc, char **argv)
{
    int count = MAX + 1;

    while(--count > 0) {
        printf("%d bottles of spring water on the wall, " "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }
    
    return EXIT_SUCCESS;
}