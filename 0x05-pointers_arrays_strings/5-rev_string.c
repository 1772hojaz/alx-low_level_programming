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
	 /* length of the string */
	int len = strlen(s);
	/* loop variable and temporary variable for swapping */
	int i;
	char temp;

	 /* Iterate through the first half of the string */
	for (i = 0; i < len / 2; i++)
	{
		 /* Swap characters: store the character at position i in temp */
		temp = s[i];
		/* Replace character at position i with the character at position len - 1 - i */
		s[i] = s[len - 1 - i];
		/* Replace character at position len - 1 - i with the character stored in temp */
		s[len - 1 - i] = temp;
	}
}
