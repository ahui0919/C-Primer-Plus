/* ptr_ops.c -- pointer operations */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1;
    int *ptr2;
    int *ptr3;

    // assign an address to a pointer
    ptr1 = urn;
    // ditto
    // dereference a pointer and take the address of a pointer
    ptr2 = &urn[2];

    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // pointer addition
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr4 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));

    // increment a pointer
    ptr1++;
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    // decrement a pointer
    ptr2--;
    printf("\nvalues after --ptr2:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    // restore to original values
    --ptr1;
    //restore to original value
    ++ptr2;

    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    // subtract one pointer form another
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

    // subtract an integer from a pointer
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p, ptr3 -2 = %p\n", ptr3, ptr3 - 2);

    return EXIT_SUCCESS;
}