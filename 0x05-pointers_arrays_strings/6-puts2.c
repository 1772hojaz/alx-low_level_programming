#include "main.h"

/**
 * puts2 - function that modifies the string to contain every other character,
 * starting with the first character, followed by a new line.
 *
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
