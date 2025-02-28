#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always(0)
 */

void more_numbers(void)
{
	int i = 10;
	int j = 14;
	int x;
	int y;

	for (x = 0; x < i; x++)
	{
		for (y = 0; y <= j; y++)
		{
			if (y > 10)
			{
				_putchar(1 + '0');
			}
			_putchar(y % 10  + '0');
		}
		_putchar('\n');
	}
}
