#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 *
 * Return: (0) nothing
 */

void print_most_numbers(void)
{
	int i = 10;
	int j;

	for (j = 0; j < i; j++)
	{
		if (j != 2 && j != 4)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
