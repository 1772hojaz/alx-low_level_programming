#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of times the charecter should be printed
 *
 * Return: if n is 0 or less the function should print \n
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
