#include <stdio.h>

void main(){
	int i = 1;
	if (i <= 5){
		for (int j = 1; j <= i; j++){
			printf("#");
		}
		printf("\n");
		i++;
	}
}
