#include<stdio.h>
#include <stdlib.h>
void bubble_sort (int *ptr,int size);

int main()
{
	int size,i;
	printf("enter size of your array\n");
	scanf("%d",&size);
	int *arr=NULL;
	arr=(int*)malloc(size*sizeof(int));
	for(int i=0;i<size;i++)
	{
		scanf("%d",&*(arr+i));
	}
	
	
	bubble_sort(arr,size);
	printf("after sorting \n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",*(arr+i));
	}
	
	
	
	
	
}
void bubble_sort (int *ptr,int size)
{
	int i,j,temp,flag=0,pass=0;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(*(ptr+j)>*(ptr+j+1))
			{
				temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
				flag=1;//to check if the swap was performed or no
			}
			pass++;//to calculate number of passes 
		}
		if(flag==0) break;
	}
	printf("number of passes=%d\n",pass);
}	
	