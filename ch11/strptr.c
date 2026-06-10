/* strptr.c -- strings as pointers */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("%s, %p, %c\n", "We", "are", *"space farers");

    return EXIT_SUCCESS;
}