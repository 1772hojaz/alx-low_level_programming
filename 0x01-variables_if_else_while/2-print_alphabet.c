#include <stdio.h>
/* This program uses putchar
 * function to print alphabet in lower case
 */
int main(void)
{
	char m;
	for(m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return 0;
}
