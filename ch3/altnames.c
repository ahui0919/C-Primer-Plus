/* altnames.c -- portable names for integer types */
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h> // supports portable types

int main(int argc, char **argv)
{
    // me32 a 32-bit signed variable
    int32_t me32; 
    me32 = 45933945;
    
    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);

    return EXIT_SUCCESS;
}