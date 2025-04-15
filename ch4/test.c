#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PARISE "wang"

int main(int argc, char **argv)
{

    char b[30] = "wang";

    printf("The array b size is %d, and len is %d\n", sizeof(b), strlen(b));
    printf("The array PARISE size is %d, and len is %d\n", sizeof(PARISE), strlen(PARISE));

    return EXIT_SUCCESS;
}