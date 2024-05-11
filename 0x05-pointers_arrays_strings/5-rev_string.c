#include <stdio.h>
#include <string.h>
/**
 * rev_string - print strings in reverse
 *
 * @s: poiter to a string
 *
 */
void rev_string(char *s);
void rev_string(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = len; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
