#include <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(x + '0');
	}
	putchar('\n');
	return (0);

}
