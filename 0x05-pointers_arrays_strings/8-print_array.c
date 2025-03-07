#include "main.h"

/**
 * print_array - a function that prints the number of elements in an array
 *
 * @a: pointer to an integer
 * @n: the number of integers
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
