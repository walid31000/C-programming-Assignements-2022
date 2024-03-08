#include<stdio.h>
int total(int arr[],int size);
int main(void)
{
	
int array[5];	
printf("please enter your array elements \n");
for (int i=0;i<5;i++)
{
	scanf("%d",&array[i]);
}
	int tot=total(array,5);
 printf("the sum of your array is %d",tot);
	
	
	
}
int total(int arr[],int size)
{
int sum=0;	
for (int i=0;i<size;i++)
sum=sum+arr[i];	
return sum;
}