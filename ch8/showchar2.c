/* showchar2.c --prints characters in rows and columns */
#include <stdio.h>
#include <stdlib.h>

void display(char cr, int lines, int width);

int main(int argc, char **argv)
{
    /* character to be printed */
    int ch;
    /* number of rows and columns */
    int rows;
    int cols;

    printf("Enter a character and two integers:\n");

    while ((ch = getchar()) != '\n') {
        if (scanf("%d %d", &rows, &cols) != 2) {
            break;
        }
        display((char)ch, rows, cols);

        while (getchar() != '\n') {
            continue;
        }
        
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }

    printf("Bye.\n");

    return EXIT_SUCCESS;
}

void display(char cr, int lines, int width)
{
    int row;
    int col;

    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(cr);
        }

        /* end line and start a new one */
        putchar('\n');
    }
}