/* break.c -- uses break to exit a loop */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    float length;
    float width;

    printf("Enter the length of the rectangle:\n");

    while (scanf("%f", &length) == 1)
    {
        printf("Lenth = %0.2f:\n", length);
        printf("Enter its width:\n");

        if (scanf("%f", &width) != 1) {
            break;
        }

        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }

    printf("Done.\n");

    return EXIT_SUCCESS;
}