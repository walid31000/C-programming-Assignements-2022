#include<stdio.h>
# include"STD_TYPES.h"
int main ()
{
	typedef struct
	{
		char name[50];
		uint32 roll;
		uint32 mark;
	}student;
     
	 student Ali;
    printf("enter your stdent name :\n");
     scanf("%s",&Ali.name);
     printf("enter your student roll:\n");
     scanf("%d",&Ali.roll);
	printf("enter your student mark:\n");
     scanf("%d",&Ali.mark); 
	 printf("student name is :%s\n",Ali.name);
     printf("student roll is :%d\n",Ali.roll);
      printf("student mark is :%d\n",Ali.mark);
}	  
		