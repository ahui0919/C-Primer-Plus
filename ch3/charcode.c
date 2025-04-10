/* charcode.c-displays code number for a character */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char ch;

    printf("Please enter a character.\n");
    /* user inputs character */
    scanf("%c", &ch); 
    printf("The code for %c is %d.\n", ch, ch);

    return EXIT_SUCCESS;
}