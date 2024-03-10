#include <stdio.h>
/**
 * main - main block
 * Description:  Numbers must be separated
 * by ,, followed by a space
 * The three digits must be
 * different 012, 120, 102, 021, 201, 210 are
 * considered the same combination of the three
 * digits 0, 1 and 2
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				if (z != 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
