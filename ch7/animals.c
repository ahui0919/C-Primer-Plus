/* animals.c -- uses a switch statement */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an anmial name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");

    while ((ch = getchar()) != '#') {
        if ('\n' == ch) {
            continue;
        }

        /* lowercase only */
        if (islower(ch)) {
            switch (ch) {
            case 'a':
                printf("argali, a wild sheep of Asia\n");
                break;

            case 'b':
                printf("babirusa, a wild pig of Malay\n");
                break;

            case 'c':
                printf("coati, racoonlike mammal\n");
                break;

            case 'd':
                printf("desman, aquatic, molelike critter\n");
                break;

            case 'e':
                printf("echidna, the spiny anteater\n");
                break;

            case 'f':
                printf("fisher, brownish marten\n");
                break;
            
            default:
                printf("That's a stumper!\n");
                break;
            }
        } else {
            printf("I recognize only lowercase letters.\n");
        }

        while (getchar() != '\n') {
            /* skip rest of input line */
            continue;
        }

        printf("Please type another letter or a #.\n");
    }

    printf("Bye!\n");

    return EXIT_SUCCESS;
}