#include "main.h"

/**
 * _puts - prints a string and a newline
 * @*str: a pointer to the string
 * @str: the string
 *
 * Returns: Nothing
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
