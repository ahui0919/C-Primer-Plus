/* entry.c -- entry condition loop */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const int SECRET_CODE = 13;
    int code_entered;

    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);

    while (code_entered != SECRET_CODE)
    {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }

    printf("Congratulations! You are cured!\n");
    
    return EXIT_SUCCESS;
}