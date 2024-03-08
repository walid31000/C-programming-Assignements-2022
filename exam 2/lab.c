#include<stdio.h>
void reverse(int arr[],int size);
int main ()
{
	int i;
	int arr[6]={10,20,30,40,50,60};
	reverse(arr,6);
	for(i=0;i<6;i++)
		printf("%d\t",arr[i]);
	
	
}
void reverse(int arr[],int size)
{
	int i,temp;
	
	for(i=0;i<size/2;i++)
	{
		temp=arr[i];
	   arr[i]=arr[(size-1)-i];
	   arr[(size-1)-i]=temp;
   }  
}   