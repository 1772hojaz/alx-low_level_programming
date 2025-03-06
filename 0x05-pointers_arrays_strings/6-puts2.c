#include "main.h"

/**
 * puts2 - function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 *
 * @*str: pointer to a string
 * @str: the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int x;
	int y;
	int i;
	char j;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	for (y = x - 1; y >= 0; x-- && i = 0; i >= 0; i++)
	{
		j = str[y];
		str[i] = j;
	}
}
