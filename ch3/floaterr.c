/* floaterr.c--demonstrates round-off error */
#include <stdio.h>
#include <stdlib.h>

int main(int arc, char **argv)
{
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;

    printf("%f \n", a);
    
    return EXIT_SUCCESS;
}