/* pound.c -- defines a function with an argument */
#include <stdio.h>
#include <stdlib.h>

// ANSI function prototype declaration
void pound(int n);

int main(int argc, char **argv)
{
    int times = 5;
    // ASCII code is 33
    char ch = '!';
    float f = 6.0f;

    // int argument
    pound(times);
    // same as pound((int)ch)
    pound(ch);
    // same as pound((int)f)
    pound(f);

    return EXIT_SUCCESS;
}

// ANSI-style function header
void pound(int n)
{
    // says takes one int argument
    while(n-- > 0) {
        printf("#");
    }
    
    printf("\n");
}