/* addresses.c -- addresses of string */
#include <stdio.h>
#include <stdlib.h>

#define MSG         "I'm special."

int main(int argc, char **argv)
{
    char ar[] = MSG;
    const char *pt = MSG;

    printf("address pf \"I'm special\": %p\n", "I'm special.");
    printf("              address of ar: %p\n", ar);
    printf("              address of pt: %p\n", pt);
    printf("            address of MSG: %p\n", MSG);
    printf("address of \"I'm special\": %p\n", "I'm special.");

    return EXIT_SUCCESS;
}