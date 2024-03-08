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
	int i,j,min_index,temp;
	
	for(i=0;i<size-1;i++)
		
	{
			min_index=i;
	    for(j=i+1;j<size;j++)
		{
		    if(arr[j]<arr[min_index])
		    min_index=j;
        }
		   if (i!=min_index)
		   {  
		        temp=arr[i];/*only one swap is performed each itteration */
		        arr[i]=arr[min_index];
               arr[min_index]=temp;
		   }   
    } 		
		
}		