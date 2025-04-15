/* prntval.c --finding printf()'s return value */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);

    printf("argc = %d\n", argc);

    for(int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return EXIT_SUCCESS;
}