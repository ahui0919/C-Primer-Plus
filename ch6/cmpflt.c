/* cmpflt.c --floating-point comparisons */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);

    while(fabs(response - ANSWER) > 0.0001) {
        printf("Try again!\n");
        scanf("%lf", &response);
    }

    printf("Close enough!\n");

    return EXIT_SUCCESS;
}