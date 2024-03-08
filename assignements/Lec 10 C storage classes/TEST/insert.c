#include<stdio.h>
void insert (int arr[],int size,int val,int pos );
int main ()
{
	int arr[8]={10,20,30,50,60,70,80};
	int var,pos,i;
	printf("enter a value to insert \n");
	scanf("%d",&var);
	
	printf("enter a position to insert in \n");
	scanf("%d",&pos);
	
	insert (arr,8,var,pos );
	printf("the array after insertion :\n");
	for(i=0;i<8;i++)
	{
		printf("%d \t",arr[i]);
	}
	
}


void insert (int arr[],int size,int val,int pos )
{
	
	int i;
	for(i=size-2;i>=pos-1;i--)
	{
		
		arr[i+1]=arr[i];
		
	}
	arr[pos-1]=val;
	
	
}	