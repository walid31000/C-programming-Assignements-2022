#include<stdio.h>
void swap(int arr[],int size);
int main ()
{

	int i;
	int data[10];
	printf("please enter th element array \n");
	for(i=0;i<=9;i++)
		scanf("%d",&data[i]);
	printf("the array befor swaping is  \n");
	for(i=0;i<=9;i++)
	
       printf("%d \t",data[i]);
	printf("\nthe array after swaping is \n");
	swap(data,10);
	for(i=0;i<=9;i++)
	printf("%d \t",data[i]);	
	
	
	
}
void swap(int arr[],int size)
{
	int temp;
	int i;
	
	for(i=0;i<=(size-1)/2;i++)
	{
		
    temp=arr[(size-1)-i];
	arr[(size-1)-i]=arr[i];
	arr[i]=temp;
	

	}
	
}	