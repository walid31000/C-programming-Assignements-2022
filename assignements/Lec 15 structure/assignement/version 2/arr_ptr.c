// C Function to store information (name, id and grade) for 10
//students in array of structures using aray of pointers and another
//function to print all the structures 
#include<stdio.h>
#include "../STD_TYPES.h"

typedef struct
	{
		uint8 name[30];
		uint32 ID;
		uint32 grade;
	}student;
	 student arr[10];
	 
    //declaration of array of pointers
	student *ptr[10];
void arr_student (student *obj[]);	
void print_struct(student *str[]);	
int main()
{
   
	//initialization of array of pointers (assigne adresses to array of pointer)
	
	for(int i=0;i<10;i++)
	{
		ptr[i]=&arr[i];
	}
    arr_student (ptr);
	
   print_struct(ptr);
}	
void arr_student (student *obj[])
{
	for(int i=0;i<10;i++)
	{
		printf("enter informations of student %d\n",i+1);
		scanf("%s",&obj[i]->name);
		scanf("%d",&obj[i]->ID);
		scanf("%d",&obj[i]->grade);
		
	}
}

void print_struct(student *str[])
{
	for(int i=0;i<10;i++)
	{
    printf("student :%d\n",i+1);		
	printf("%s\n",str[i]->name);
	printf("%d\n",str[i]->ID);
	printf("%d\n",str[i]->grade);
	
	}
}