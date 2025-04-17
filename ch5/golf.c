/* golf.c -- golf tournament scorecard */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int jane;
    int tarzan;
    int cheeta;

    cheeta = tarzan = jane = 68;
    printf("                 cheeta    tarzan     jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    return EXIT_SUCCESS;
}