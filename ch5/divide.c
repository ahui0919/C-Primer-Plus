/* divide.c -- divisions we have known */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("integer divison:    5/4     is  %d\n", 5 / 4);
    printf("integer divison:    6/3     is  %d\n", 6 / 3);
    printf("integer divison:    7/4     is  %d\n", 7 / 4);
    printf("floating divison:   7./4.   is  %1.2f\n", 7./4.);
    printf("mixed divison:      7./4    is  %1.2f\n", 7./4);

    return EXIT_SUCCESS;
}