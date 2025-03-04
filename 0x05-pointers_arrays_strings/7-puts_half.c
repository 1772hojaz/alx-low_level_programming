#include "main.h"

/**
 * puts_half- that prints half of a string, followed by a new line.
 * @*str: a pointer to a string
 * @str: athe string
 *
 * Return: Nothing (0)
 */

void puts_half(char *str)
{
	int x;
	int y;
	int z;


	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	y = x / 2;

	for (z = 0; z <= y; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
