#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: is a pointer to the sting
 */
void print_rev(char *s);
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
