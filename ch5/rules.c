/* rules.c -- precedence test */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int top;
    int score;

    score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    top = score;
    printf("top = %d, score = %d\n", top, score);
    
    return EXIT_SUCCESS;
}