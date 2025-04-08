/* your weight in platinum */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    /* user weight */
    float weight; 
    /* platinum equivalent */
    float value;  

    const double PRICE = 1700.0;
    const double POUNDS_TO_OUNCES = 14.5833;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    /* get input from the user */
    scanf("%f", &weight);
    /* assume platinum is $1700 per ounce */
    /* 14.5833 converts pounds avd. to ounces troy */
    value = PRICE * weight * POUNDS_TO_OUNCES;

    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return EXIT_SUCCESS;
}