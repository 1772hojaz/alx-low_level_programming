#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: is a pointer to the sting
 */
void _puts(char *str);
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
