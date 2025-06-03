/* lethead1.c */
#include <stdio.h>
#include <stdlib.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

/* prototype the fucntion */
void starbar(void);

int main(int argc, char **argv)
{
    starbar();

    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);

    /* use the function */
    starbar();

    return EXIT_SUCCESS;
}

/* define the function */
void starbar(void)
{
    int count;

    for (count = 1; count <= WIDTH; count++) {
        putchar('*');
    }

    putchar('\n');
}