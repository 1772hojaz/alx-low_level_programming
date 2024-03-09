#include <stdio.h>

int main(void)
{
	char x;
	char y;
	char z;

	for (x = 'a'; x < 'e'; x++)
	{
		putchar(x);
	}
	for (y = 'f'; y < 'q'; y++)
	{
		putchar(y);
	}
	for (z = 'r'; z <= 'z'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
