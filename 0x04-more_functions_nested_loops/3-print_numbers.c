#include "main.h"
#include <stdio.h>

/**
 * print_numbers - funvtion that prints numbers from 0 to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int i = 10;
	int j;

	for (j = 0; j < i; j++)
	{
		_putchar(j + '0');
	}
	_putchar('\n');
}
