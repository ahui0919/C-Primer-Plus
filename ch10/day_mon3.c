/* day_mon3.c -- uses pointer notation */
#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

int main(int argc, char **argv)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++){
        // same as days[index]
        printf("Month %2d has %d days.\n", index + 1, *(days + index));
    }

    return EXIT_SUCCESS;
}