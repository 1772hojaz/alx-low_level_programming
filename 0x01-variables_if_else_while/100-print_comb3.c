#include <stdio.h>
/**
 * main - main block
 * Description: Numbers must be separated
 * by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same
 * combination of the two digits 0 and 1
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			if (y >= 2)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(x + '0');
			putchar(y + '0');
		}
	}
	putchar('\n');
	return (0);
}
