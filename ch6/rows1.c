/* rows1.c -- uses nested loops */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 6
#define CHARS 10

int main(int argc, char **argv)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) {
        for (ch = 'A'; ch < ('A' + CHARS); ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    
    return EXIT_SUCCESS;
}