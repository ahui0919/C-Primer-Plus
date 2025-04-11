/* printout.c --uses conversion specifiers */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.141593

int main(int argc, char **argv)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %-6.2f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);

    return EXIT_SUCCESS;
}