/* guess.c -- an inefficient and faulty number-guesser */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int guess = 1;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);

    /* get response, compare to y */
    while ((response = getchar()) != 'y')
    {
        if ('n' == response) {
            printf("Well, then, is it %d?\n", ++guess);
        } else {
            printf("Sorry, I understand only y or n.\n");
        }

        while (getchar() != '\n')
        {
            continue;
        }
        
    }

    printf("I knew I could do it!\n");
    
    return EXIT_SUCCESS;
}