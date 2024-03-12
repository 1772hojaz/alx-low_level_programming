#include "main.h"
/**
 * print_last_digit - Entry point
 * @a: the input parametre
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int a)
{
	a = a % 10;
	_putchar(a +'0');
	return (0);
}
