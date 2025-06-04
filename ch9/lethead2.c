/* lethead2.c */
#include <stdio.h>
/* for strlen() */
#include <string.h>
#include <stdlib.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(int argc, char **argv)
{
    int spaces;

    /* using constants as arguments */
    show_n_char('*', WIDTH);
    putchar('\n');

    /* using constants as arguments */
    show_n_char(SPACE, 12);
    printf("%s\n", NAME);

    /* Let the program calculate */
    /* how many spaces to skip */
    spaces = (WIDTH - strlen(ADDRESS)) / 2;
    /* use a variable as argument */
    show_n_char(SPACE, spaces);
    printf("%s\n", ADDRESS);

    /* an expression as argument */
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
    printf("%s\n", PLACE);

    show_n_char('*', WIDTH);
    putchar('\n');
    
    return EXIT_SUCCESS; 
}

/* show_n_char() definition */
void show_n_char(char ch, int num)
{
    int count;

    for (count = 1; count <= num; count++) {
        putchar(ch);
    }
}
