//c function to  sort an integer array in ascending order
#include<stdio.h>
void sorting (int arr[],int size);
int main ()
{
	int i,j;
	int data[6];
	printf("please enter your array \n");
	for(i=0;i<6;i++)
	{
	    printf("enter the element %d   ",i+1);
        scanf("%d",&data[i]);
	}	
	sorting(data,6);
	printf("data after sorting ");
	
    	
		
	
	for(j=0;j<6;j++)
		printf("%d\t",data[j]);
	
}	



void sorting (int arr[],int size)
{
	int i,j,max_index,temp;
	
	for(i=0;i<size-1;i++)
		
	{
			max_index=i;
	    for(j=i+1;j<size;j++)
		{
		    if(arr[j]>arr[max_index])
		    max_index=j;
        }
		   if (i!=max_index)
		   {  
		        temp=arr[i];
		        arr[i]=arr[max_index];
               arr[max_index]=temp;
		   }   
    } 		
		
}	