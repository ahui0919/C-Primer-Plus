/* summing.c --sums integers entered interactively */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long num;
    /* initialize sum to zero */
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);

    /* == meas "is equal to "*/
    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld", &num);
    }

    printf("Those integers sum to %ld.\n", sum);
    
    return EXIT_SUCCESS;
}