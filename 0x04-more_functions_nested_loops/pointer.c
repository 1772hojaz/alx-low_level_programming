#include <stdio.h>

void modeify_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';

	printf("o became : %c \n", *cc);
	printf("l became : %c \n", ccc);
}

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("%p \n", p);
	printf("%c \n", c);
	printf("%c \n", *p);

	modeify_my_char_var(p, c);
	return (0);
}
