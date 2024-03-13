#include "main.h"
#include <unistd.h>
/**
 * jack_bauer - Entry point
 * @r: last parameter
 * @x: first parameter
 * @y: second parameter
 * @z: third parameter
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int r;
	int x;
	int y;
	int z = 0;

	for (x = 0; x <= 2; x++)
	{

		for (y = 0; y <= 3; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (r = 0; r <= 9; r++)
				{
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar(':');
					_putchar(z + '0');
					_putchar(r + '0');
					_putchar('\n');
				}
			}
		}
	}
}
