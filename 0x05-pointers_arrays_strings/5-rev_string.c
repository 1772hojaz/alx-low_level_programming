#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @*s: a pointer to a string
 * @s: the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int x;
	int y;
	int i;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	for (y = x - 1; y > x / 2; y--)
	{
		i = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = i;
	}
}
