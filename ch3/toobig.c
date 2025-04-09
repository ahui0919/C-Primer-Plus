/* toobig.c-exceeds maximum int size on our system */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%u %u %u\n", j, j + 1, j + 2);
    return EXIT_SUCCESS;
}