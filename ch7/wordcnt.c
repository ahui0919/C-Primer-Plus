/* wordcnt.c -- counts characters, word, lines */
#include <stdio.h>
/* for isspace() */
#include <ctype.h>
/* for bool, true, false */
#include <stdbool.h>
#include <stdlib.h>

#define STOP '|'

int main(int argc, char **argv)
{
    /* read in character */
    char c;
    /* previous character read */
    char prev;
    /* number of characters */
    long n_chars = 0L;
    /* number of lines */
    int n_lines = 0;
    /* number of words */
    int n_words = 0;
    /* number of partial lines */
    int p_lines = 0;
    /* == true if c is in a word */
    bool inWord = false;

    printf("Enter text to be analyzed (| to terminate):\n");
    /* used to identify complete lines*/
    prev = '\n';

    while ((c = getchar()) != STOP) {
        /* count characters */
        n_chars++;
        if (c == '\n') {
            /* count lines */
            n_lines++;
        }

        if (!isspace(c) && !inWord) {
            /* starting a new word */
            inWord = true;
            /* count word */
            n_words++;
        }

        if (isspace(c) && inWord) {
            /* reached end of word */
            inWord = false;
        }

        /* save character value */
        prev = c;
    }

    if (prev != '\n') {
        p_lines = 1;
    }

    printf("characters = %ld, word = %ld, lines = %ld, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return EXIT_SUCCESS;
}