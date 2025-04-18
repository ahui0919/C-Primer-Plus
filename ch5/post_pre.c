/* post_pre.c --postfix vs prefix */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a = 1;
    int b = 1;
    int a_post;
    int pre_b;

    // value of a++ during assignment phase
    a_post = a++;
    // value of ++b during assignment phase
    pre_b = ++b;

    printf("a   a_post    b   pre_b \n");
    printf("%ld  %5d %5d %5d\n", a, a_post, b, pre_b);
    
    return EXIT_SUCCESS;
}