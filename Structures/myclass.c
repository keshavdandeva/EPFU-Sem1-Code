#include <stdio.h>
#include "class_info.h"
#include <string.h>

int main(int argc, char const *argv[])
{
	struct student tmp;
	struct student myclass[CLASS_SIZE];
	tmp.last_name = "Munni";
	tmp.grade = 'F';
	tmp.student_id = 302333;

	for (int i = 0; i < 3; ++i)
	{
		printf("Enter the last name of student: \n");
		scanf(" %s",&myclass[i].last_name);
		printf("\nEnter the grade of student: \n");
		scanf("%c",&myclass[i].grade);
		printf("\nEnter the ID of student: \n");
		scanf("%d",&myclass[i].student_id);
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("\nName of student %d is : %s \n", i+1, myclass[i].last_name);
		printf("\nGrade of student %d is : %c \n", i+1, myclass[i].grade);
		printf("\nID of student %d is : %d \n", i+1, myclass[i].student_id);
	}

	return 0;
}