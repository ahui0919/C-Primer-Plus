/* file_eof.c  --open a file and display it */
#include <stdio.h>
// for exit()
#include <stdlib.h>     

int main(int argc, char **argv)
{
    int ch;
    FILE *fp;
    // to hold the file name
    char fname[50];

    printf("Enter the name of the file: ");
    scanf("%s", fname);
    /* open file for reading */
    fp = fopen(fname, "r");
    /* attemp failed */
    if (fp == NULL) {
        printf("Failed to open file. Bye\n");
        /* quit program */
        exit(1);
    }

    /* getc(fp) gets a character from the open file */
    while ((ch = getc(fp)) != EOF)
    {
        putchar(ch);
    }

    /* close the file */
    fclose(fp);

    return EXIT_SUCCESS;
}