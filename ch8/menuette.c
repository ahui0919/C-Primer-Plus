/* menuette.c -- menu techniques */
#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(int argc, char **argv)
{
    int choice;
    
    while ((choice = get_choice()) != 'q') {
        switch (choice)
        {
            case 'a': {
                printf("Buy low, sell high.\n");
                break;
            }

             case 'b': {
                /* ANSI */
                putchar('\a');
                break;
            }     

            case 'c': {
                count();
                break;
            }    

            default: {
                printf("Program error!\n");
                break;
            }
        }
    }

    printf("Bye.\n");
    
    return EXIT_SUCCESS;
}

void count(void)
{
    int n;
    int i;

    printf("Count how far? Enter an integer:\n");
    n = get_int();

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    while (getchar() != '\n')
    {
        continue;
    }
}

char get_choice(void)
{
    int ch;

    printf("Enter the letter of your choice:\n ");
    printf("a. advice       b. bell\n");
    printf("c. count        q. quit\n");
    ch = get_first();

    while ((ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }

    return ch;
}

char get_first(void)
{
    int ch;

    ch = getchar();

    while (getchar() != '\n') {
        continue;
    }

    return ch;
}

int get_int(void)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            // dispose of bad input
            putchar(ch);
        }

        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }

    return input;
}