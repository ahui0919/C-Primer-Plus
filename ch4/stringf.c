/* stringf.c -- string formatting */
#include <stdio.h>
#include <stdlib.h>

#define BLURB "Authentic imitation!"

int main(int argc, char **argv)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    
    return EXIT_SUCCESS;
}