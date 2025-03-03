#include "main.h"

/**
 * swap_int - swaps the values of 2 intergers
 * @*a: first integer parameter
 * @*b: second interger parameter
 *
 * Return: void (0)
 */

void swap_int(int *a, int *b)
{
	int tempa;
	int tempb;


	tempa = *a;
	tempb = *b;

	*a = tempa;
	*b = tempb;
}
