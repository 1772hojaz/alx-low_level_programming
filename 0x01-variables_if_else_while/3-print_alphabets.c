#include <stdio.h>

/**
 * Program: 3-print_alphabets.c
 *
 * Description:
 *   This program prints the alphabet in lowercase and uppercase followed by a new line.
 */

int main(void)
{
	/**
	 * main - Entry point
	 * -----------------
	 *  Return: Always 0 (success)
	 */

	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
