#include "main.h"

/**
 * _strlen - function that returns the length of the string
 *
 * @s: the string
 * @*s: A pointer to a string
 *
 * Return: returns the int size of a string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
