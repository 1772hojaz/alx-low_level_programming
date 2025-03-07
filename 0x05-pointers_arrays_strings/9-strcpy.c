#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by
 * @*src: including the terminating null byte (\0)
 * to the buffer pointed to by
 * @*dest: bufer poiter
 * @dest: bufer
 * @src: the string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int y;

	y = 0;
	for (x = 0; src[x] != '\0'; x++, y++)
	{
		dest[y] = src[x];
	}
	dest[y] = '\0';

	return (dest);
}
