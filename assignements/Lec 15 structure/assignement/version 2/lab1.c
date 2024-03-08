#include<stdio.h>
#include "../STD_TYPES.h"	
int main ()
{
	typedef struct
	{
		char name[50];
		uint32 roll;
		uint32 mark;
	}student;
	
	student student_data;
    printf("enter student name\n");
    scanf("%s",&student_data.name);	
	
	printf("enter student roll\n");
    scanf("%d",&student_data.roll);

 printf("enter student mark\n");
    scanf("%d",&student_data.mark);		
	
	printf("student name is :%s\n",student_data.name);
    printf("student roll is :%d\n ",student_data.roll);
	 printf("student mark is :%d\n ",student_data.mark);
}