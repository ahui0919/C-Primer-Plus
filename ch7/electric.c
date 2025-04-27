/* electric.c -- calculates electric bill */
#include <stdio.h>
#include <stdlib.h>

/* rate for first 360 kwh */
#define RATE1   0.13230
/* rate for first 108 kwh */
#define RATE2   0.15040
/* rate for first 252 kwh */
#define RATE3   0.30025
/* rate for first 720 kwh */
#define RATE4   0.34025
/* first breakpoint for rates */
#define BREAK1  360
/* second breakpoint for rates */
#define BREAK2  468
/* third breakpoint for rates */
#define BREAK3  720

#define BASE1   (RATE1 * BREAK1)
/* cost for 360 kwh */
#define BASE2   (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
/* cost for 468 kwh */
#define BASE3   (BASE1 + BASE2 + (RATE3 * (BREAK3 - BREAK2)))
/* cost for 720 kwh */

int main(int argc, char **argv)
{
    /* kilowatt-hours used */
    double kwh;
    /* charges */
    double bill;

    printf("Please enter the kwh used.\n");
    /* %lf for type double */
    scanf("%lf", &kwh);

    if (kwh <= BREAK1) {
        bill = RATE1 * kwh;
    } else if (kwh <= BREAK2) {
        /* kwh between 360 and 468 */
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    } else if (kwh <= BREAK3) {
        /* kwh between 468 and 720 */
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    } else {
        /* kwh above 680 */
        bill = BASE3 + (RATE4 * (kwh - BREAK3));
    }

    printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);

    return EXIT_SUCCESS;
}