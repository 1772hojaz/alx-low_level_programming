#include <ctype.h>
/**
 * _islower - Entry point
 * @c: is the parameter
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
