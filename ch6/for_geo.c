/* for_geo.c */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    double debt;

    for(debt = 100.0; debt < 150.0; debt = debt * 1.1) {
        printf("Your debt is now $%.2f. \n", debt);
    }
    
    return EXIT_SUCCESS;
}