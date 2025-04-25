/* scores_in.c -- uses loops for array processing */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define PAR 72

int main(int argc, char **argv)
{
    int index;
    int score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index++) {
        // read in the ten scores
        scanf("%d", &score[index]);
    }

    printf("The scores read in are as follows:\n");
    for (index = 0; index < SIZE; index++) {
        // verify input
        printf("%5d", score[index]);
    }

    printf("\n");

    for (index = 0; index < SIZE; index++) {
        // add them up
        sum += score[index];
    }

    // time-honored method
    average = (float) sum / SIZE;

    printf("Sum of corese = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);
    
    return EXIT_SUCCESS;
}