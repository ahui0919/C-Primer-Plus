/* getsputs.c -- using gets() and puts() */
#include <stdio.h>
#include <stdlib.h>

#define STLEN 81

int main(int argc, char **argv)
{
    char words[STLEN];

    puts("Enter a string, please.");
    gets(words);

    printf("Your string twice:\n");
    printf("%s\n", words);

    puts(words);
    puts("Done.");
    
    return EXIT_SUCCESS;
}