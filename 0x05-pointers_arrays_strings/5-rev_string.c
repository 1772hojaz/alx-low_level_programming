#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @*s: a pointer to a string
 * @s: the string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int x;
	int y;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
