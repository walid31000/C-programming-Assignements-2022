#include<stdio.h>
int main ()
{
	int i;
	int arr[100];
	
     
	printf("please enter the nth element to print  "); 
	scanf("%d",&i);
	arr[i-1]=2*(i-1)+1;
	printf("the %dth element = %d \t ",i,arr[i-1]);
	
	
	
}	