/* while1.c -- watch  your brances */
/* bad coding creates an infinite loop*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = 0;

    while(n < 3) {
        printf("n is %d\n", n);
        n++;
    }

    printf("That's all this program does\n");

    return EXIT_SUCCESS;
}