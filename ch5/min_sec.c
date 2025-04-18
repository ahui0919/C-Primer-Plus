// min_sec.c --converts seconds to minutes and seconds
#include <stdio.h>
#include <stdlib.h>

// seconds in a minute
#define SEC_PER_MIN 60     

int main(int argc, char **argv)
{
    int sec;
    int min;
    int left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);

    while(sec > 0) {
        // truncated number of minutes
        min = sec / SEC_PER_MIN;
        // number of seconds left over
        left = sec % SEC_PER_MIN;

        printf("%d seconds is %d minutes, %d seconds.\n", sec,
            min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }

    printf("Done!\n");

    return EXIT_SUCCESS;
}