/* escape.c -- uses escape characters */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    float salary;

    /* 1 */
    printf("\aEnter your desired monthly salary:"); 
    /* 2 */
    printf(" $_______\b\b\b\b\b\b\b");

    scanf("%f", &salary);

    /* 3 */
    printf("\n\t$%.2f a month is $%.2f a year.", salary,
            salary * 12.0);
    /* 4 */
    printf("\rGee!\n");

    return EXIT_SUCCESS;
}