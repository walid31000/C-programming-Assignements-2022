#include<stdio.h>
#include <stdlib.h>
void bubble_sort (int arr[],int size);

int main()
{
	int arr[5]={10,20,30,40,50};
	bubble_sort(arr,5);
	printf("after sorting \n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	
	
	
	
}
void bubble_sort (int arr[],int size)
{
	int i,j,temp,flag=0,pass=0;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;//to check if the swap was performed or no
			}
			pass++;//to calculate number of passes 
		}
		if(flag==0) break;
	}
	printf("number of passes=%d\n",pass);
}	
	