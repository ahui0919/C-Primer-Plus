/* skiptwo.c --skips over first two integers of input */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = 0;

    printf("Please enter three integers:\n");

    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);
    
    return EXIT_SUCCESS;
}