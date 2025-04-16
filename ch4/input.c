/* input.c -- when to use & */
#include <stdio.h>
#include <stdlib.h>

#define SPACE 30

int main(int argc, char **argv)
{
    int age;        // variable
    float assets = 0.0f;   // variable
    char pet[SPACE];   // string

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);      // use the & here
    scanf("%s", pet);                   // no & for char array
    printf("%d $%.2f %s\n", age, assets, pet);

    return EXIT_SUCCESS;
}