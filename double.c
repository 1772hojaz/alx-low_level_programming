#include <stdio.h>

int main()
{
	int num = 123;
	int *pr = &num;
	int **pr1 = &pr;

	printf("\n Value of num is : %d", num);
	printf("\n value of num is : %d", *pr);
	printf("\n Value of num is : %d \n", **pr1);


	return 0;
}
