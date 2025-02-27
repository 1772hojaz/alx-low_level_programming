#include <stdio.h>
#include "main.h"
int _isupper(int c){
	int ascii_num = c;

	if (ascii_num >= 65 && ascii_num <= 90){
		return 1;
	}
	else{
		return 0;
	}
}
