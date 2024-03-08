// C Function to store information (name, id and grade) for 10
//students in array of structures using pointers and another
//function to print all the structures using pointers.
#include<stdio.h>
#include "../STD_TYPES.h"

typedef struct
	{
		uint8 name[30];
		uint32 ID;
		uint32 grade;
	}student;
	 
	void  store_element(student *obj);
	void  print_element(student *obj); 
	 
	 int main()
	 {
		 student arr[10];
		 store_element(arr);
	     print_element(arr); 
		 
		 
		 
		 
		 
	 }
	void  store_element(student *obj)
	{
     for(int i=0;i<10;i++)
	 {
		 printf("enter information of student %d",i+1);
		 printf("Name:");
         scanf("%s",(obj+i)->name);

		 
		 printf("ID:");
         scanf("%d",&(obj+i)->ID);
		 
		 printf("Grade:");
         scanf("%d",&(obj+i)->grade);
	 }
	}
	
	
	void  print_element(student *obj)
    {
     for(int i=0;i<10;i++)
	 {
		 printf("student %d \n",i+1);
		 printf("Name:");
         printf("%s\n",(obj+i)->name);

		 
		 printf("ID:");
         printf("%d \n",(obj+i)->ID);
		 
		 printf("Grade:");
         printf("%d\n",(obj+i)->grade);
	 }
	}
 