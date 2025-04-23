/* postage.c -- first-class postage rates */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    // 2013 rate
    const int FIRST_OZ = 46;
    // 2013 rate
    const int NEXT_OZ = 20;
    int ounces;
    int cost;

    printf(" ounces cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ) {
        printf("%5d     $%4.2f\n", ounces, cost / 100.0);
    }
    
    return EXIT_SUCCESS;
}