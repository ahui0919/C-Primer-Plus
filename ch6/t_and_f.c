/* t_and_f.c -- true and false values in C */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int true_val;
    int false_val;

    // value of a true relationship
    true_val = (10 > 2);
    // value of a false relationship
    false_val = (10 == 2);

    printf("true = %d; false = %d \n", true_val, false_val);
    
    return EXIT_SUCCESS;
}