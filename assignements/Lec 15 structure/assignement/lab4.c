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

    student arr[10][3];
	student (*ptr)[3]=arr;
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<1;j++)
	  {	
		printf("enter student name %d :\n",i+1);
		scanf("%s",&(*(*(ptr+i)+j)).name);
		printf("enter student %d ID :\n",i+1);
		scanf("%d",&(*(*(ptr+i)+j)).ID);
		printf("enter student %d grade :\n",i+1);
		scanf("%d",&(*(*(ptr+i)+j)).grade);
	  }
	}	

  
	
	   for(i=0;i<10;i++)
       {
		  for(j=0;j<1;j++)
	       {	
		       printf(" student %d name :%s\n",i+1,(*(*(ptr+i)+j)).name);
		
	     	   printf(" student %d ID : %d \n",i+1,(*(*(ptr+i)+j)).ID);
		
		      printf("student %d grade :%d \n",i+1,(*(*(ptr+i)+j)).grade);
	       }
	   }
}   	