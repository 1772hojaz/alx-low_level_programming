#include "main.h"
/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int ascii_num = c;

	if (ascii_num >= 65 && ascii_num <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
