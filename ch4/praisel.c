/* praisel.c --uses an assortment of strings */
#include<stdio.h>
#include<stdlib.h>
#define PRAISE "You are an extraordinary being."
int main(int argc, char **argv)
{
    char name[40];

    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    
    return EXIT_SUCCESS;
}