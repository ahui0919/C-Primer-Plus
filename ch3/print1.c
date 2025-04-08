/* print1.c-displays some properties of printf() */
#include <stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten); // forgot 2 arguments

    return EXIT_SUCCESS;
}