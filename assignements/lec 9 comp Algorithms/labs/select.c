//code that implement selection sorting algorithm
#include<stdio.h>
void select_sort(int arr[],int size);
void main()
{
	int data[6];
	int i;
	for(i=0;i<6;i++)
	{
		printf("enter element :%d \n",i+1);
		scanf("%d",&data[i]);
	}
	select_sort(data,6);
	printf("the array after sorting \n");
	for(i=0;i<6;i++)
	{
		printf("%d \t",data[i]);
	}
  
  
  
  
  
  
}
void select_sort(int arr[],int size)
{ 
   int i,j,temp;
   for(i=0;i<size-1;i++)
	   
	{

        int Min_index=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[Min_index])
				Min_index=j;
		}
	    
        if(i!=Min_index) //if the element is in the right order no need for swap
		{
           
		   temp=arr[i];   /*only one swap is performed each itteration */
		   arr[i]=arr[Min_index];
		   arr[Min_index]=temp;
		}
	}
}


	
			
			

           	   
	
	
	
	
	
	
	
	