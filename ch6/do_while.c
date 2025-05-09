/* do_while.c -- exit condition loop */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const int secret_code = 13;
    int code_entered;

    do {
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while(code_entered != secret_code);

    printf("Congratulations! You are cured!\n");

    return EXIT_SUCCESS;
}