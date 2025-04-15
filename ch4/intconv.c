/* intconv.c -- some mismatched integer conversions */
#include <stdio.h>
#include <stdlib.h>

#define PAGES 336
#define WORDS 65618

int main(int argc, char **argv)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

    return EXIT_SUCCESS;
}