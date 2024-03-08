
#include<stdio.h>

int main ()
{

        int i;
       int arr[10]={1,2,3,4,5,6,7,8,9,10};
	   //printf("enter the array elements\n");
	   int *ptr[10];
         for(i=0;i<10;i++)
		 {
			 ptr[i]=&arr[i];//creat array of pointers
		 }

         for(i=0;i<10;i++)
		 {
			 printf("the value of the array is arr[%d]=%d\n ",i,*ptr[i]);
		 }
		 
		 
}		 
		 