#include<stdio.h>
int main ()
{
int i,j,row;
printf("please enter the number of rows  ");
scanf("%d",&row);
  for (j=0;j<row;j++)
  {	
        for (i=0;i<=j;i++)
        {	
	
        printf("*");
	
       }	

   printf("\n");
  }
 
}