#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*betty style doc
 * for function
 * main goes there
 */
int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	printf("Last digit of %d is %d ", n, rem);
	if (rem > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (rem == 0)
	{
		printf("and is 0\n");
	}
	else if (rem < 6 && !(rem == 0))
	{
		printf("and is less than 6 and not 0\n");
	}	
	return (0);
}
