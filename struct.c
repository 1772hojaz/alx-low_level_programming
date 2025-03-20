#include <stdio.h>
#include <string.h> 
/**
 * main - the main function;
 * Retrurns: Nothing
 */

struct Student
{
	int id;
	char name[10];
	int grade;
};

void main()
{
	struct Student s1;

	strcpy(s1.name,"Humphrey");
	s1.id = 1;
	s1.grade = 12;

	printf("%s, grade: %d", s1.name, s1.grade);

}
