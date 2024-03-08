#include<stdio.h>
# include"STD_TYPES.h"

typedef struct
	{
		
		uint32 name [10];
		uint32 ID;
		uint32 grade;
	}student;
//void store(student arr[]);
//void print(student arr[]);	
 	
       int i,j;
     int main()
{

    student arr[10];
	student (*ptr)[10]=&arr;
	
	for(i=0;i<10;i++)
	{
		
	  	
		printf("enter student name %d :\n",i+1);
		scanf("%s",&(*(*(ptr+i))).name);
		printf("enter student %d ID :\n",i+1);
		scanf("%d",&(*(*(ptr+i))).ID);
		printf("enter student %d grade :\n",i+1);
		scanf("%d",&(*(*(ptr+i))).grade);
	  
	}	

  
	
	   for(i=0;i<10;i++)
       {
		  
	       	
		       printf(" student %d name :%s\n",i+1,(*(*(ptr+i))).name);
		
	     	   printf(" student %d ID : %d \n",i+1,(*(*(ptr+i))).ID);
		
		      printf("student %d grade :%d \n",i+1,(*(*(ptr+i))).grade);
	       
	   }
} 