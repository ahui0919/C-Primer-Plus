/* p_and_s.c -- pointers and strings */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const char * mesg = "Don't be a fool!";
    const char * copy;

    copy = mesg;

    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

    return EXIT_SUCCESS;
}