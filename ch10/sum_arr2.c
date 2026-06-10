/* sum_arr2.c -- sums the elements of array */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int sump(int * start, int *end);

int main(int argc, char **argv)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    
    return EXIT_SUCCESS;
}

/* use pointer arithmetic */
int sump(int *start, int *end)
{
    int total = 0;

    while (start < end) {
        // add value to total
        total += *start;
        // advance pointer to next element
        start++;
    }

    return total;
}