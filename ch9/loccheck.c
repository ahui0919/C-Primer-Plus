/* loccheck.c -- checks to see where variables are stored */
#include <stdio.h>
#include <stdlib.h>

/* declare function */
void mikado(int);

int main(int argc, char **argv)
{
    /*local to main()*/
    int pooh = 2;
    int bah = 5;

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);

    mikado(pooh);

    return EXIT_SUCCESS;
}

/* define function*/
void mikado(int bah)
{
    /* local to mikado() */
    int pooh = 10;

    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
    
    return;
}