#include <stdio.h>
/**
 * swap_int - main entry
 * @a : is the first pointer
 * @b : is the second pointer
 *
 * Return : Always 0 (Success)
 */
void swap_int(int *a, int  *b);
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
