#include<stdio.h>
void sorting(int data[],int size);
int main ()
{
	int i,j,temp,min_index;
	int arr[6];
	for(i=0;i<6;i++)
	{
		printf("please enter the element %d ",i+1);
		scanf("%d",&arr[i]);
		
	}	
	printf("the array befor sorting is \n");
	for(i=0;i<6;i++)
	{
		printf("%d \t",arr[i]);
	}	
	sorting(arr,6);
	
	printf("the array after sorting is \n");
	for(i=0;i<6;i++)
	{
		printf("%d \t",arr[i]);
	}
}	
	
	
void sorting(int data[],int size)
{	
int i,j,temp,min_index;
	for(i=0;i<size-1;i++)
	{
		min_index=i;
		for(j=i+1;j<size;j++)
		{
			if(data[j]<data[min_index])
			{
				min_index=j;
			}	
	    }
	
	   {
			
			temp=data[i];
		    data[i]=data[min_index];
			data[min_index]=temp;
	   }
		
	}	
		
	
	
}	
	