/* print2.c-more printf() properties */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    unsigned int un = 3000000000; /* system with 32-bit int */
    short end = 200;              /* and 16-bit short */
    long big = 65537;
    long long verybig = 12345678908642;
    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig= %lld and not %ld\n", verybig, verybig);

    printf("%d %d %d %d \n", sizeof(unsigned int), sizeof(short), sizeof(long), sizeof(long long));
    return EXIT_SUCCESS;
}