#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string
 * @*s: the pointer to a string
 *
 * Return: return nothing
 */

void print_rev(char *s)
{
	int x;
	int i;

	i = 0;


	while (s[i] != '\0')
	{
		i++;
	}

	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
