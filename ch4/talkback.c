// talkback.c -- nosy,  informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype
#include <stdlib.h>

#define DENSITY 62.4

int main(int argc, char **argv)
{
    float weight, volume;
    int size, letters;
    // name is an array of 40 chars
    char name[40];

    printf("Hi! What's your first name?\n");
    scanf("%s", name);

    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);

    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n",
           name, volume);
    printf("Also, your first name has %d letters,\n",
           letters);
    printf("and we have %d bytes to store it.\n", size);

    return EXIT_SUCCESS;
}