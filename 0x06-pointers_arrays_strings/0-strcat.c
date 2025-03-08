#include "main.h"
/**
 * _strcat - a function that concatinates 2 strings
 * char *_strcat(char *dest, char *src);
 * @dest: first string
 * @src: second string
 * @*dest: pointer to dest string
 * @*src: pointer to src string
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;
	int i;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	i = 0;

	for (y = x; src[i] != '\0'; y++, i++)
	{
		dest[y] = src[i];

	}

	return (dest);
}
