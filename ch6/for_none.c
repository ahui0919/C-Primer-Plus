/* for_none.c */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int ans;
    int n;

    ans = 2;

    for (n = 3; ans <= 25; ) {
        ans = ans * n;
    }

    printf("n = %d; ans = %d.\n", n, ans);
    
    return EXIT_SUCCESS;
}