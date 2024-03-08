#include<stdio.h>
int get_smallest (int *ptr,int size);
int main ()
{
int i;
int arr[10];
printf("please enter your array's elements  \n");
for(i=0;i<10;i++)
	scanf("%d",&arr[i]);

int result=get_smallest(arr,10);
printf("the smallest elements in the array is: %d \n",result);


}


int get_smallest (int *ptr,int size)
{
	int i,j,min;

	for(i=1;i<size;i++)
	{
		
			
		    if(*(ptr+i)<*(ptr))
		   {
		 	min=*(ptr+i);
		    }
			
		
	}	
		
	return min;
}