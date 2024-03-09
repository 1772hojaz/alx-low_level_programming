#include <stdio.h>

/*
 * This program prints the alphabet in lower case using the putchar function.
 */
int main(void)
{
    char m;

    for (m = 'a'; m <= 'z'; m++)
    {
        putchar(m);
    }
    putchar('\n');
    return 0;
}
