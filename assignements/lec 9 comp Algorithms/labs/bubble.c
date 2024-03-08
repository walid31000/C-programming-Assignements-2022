//code that implement bubble sorting algorithm
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
   int i,j,temp,flag=0,counter=0;
   for(i=0;i<size-1;i++)  // outer loop to count pass number
	   
	{

		for(j=0;j<size-1-i;j++)  // inner loop to perform swap
		{
			if(arr[j]>arr[j+1])
			{	
		      
			  temp=arr[j];   /* swap is performed each itteration */
		      arr[j]=arr[j+1];
		      arr[j+1]=temp;
			  flag=1;
			}	
			counter++;//counter to check how many itteration has done ex:if the array contain n elements the counter should be
		             //at least(n-1) ,(in case of the best case whene the element are sorted already),if the counter is more than
					 //(n-1) the algorithm has performed more than one pass
		}
	    if(flag==0)
		{
			break;
		}
      
		
	}
	printf("number of round =%d\n",counter);
}


	
			
			

           	   
	
	
	
	
	
	
	
	