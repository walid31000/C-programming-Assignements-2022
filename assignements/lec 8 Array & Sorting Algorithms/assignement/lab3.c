#include<stdio.h>

void swap(int arr1[],int arr2[],int size);
int main(void)
{
int arr1[5];	
printf("please enter your arr1 elements \n");
for (int i=0;i<5;i++)
{
	scanf("%d",&arr1[i]);
}	

int arr2[5];	
printf("please enter your arr2 elements \n");
for (int i=0;i<5;i++)
{
	scanf("%d",&arr2[i]);
}
printf("arr1 before swaping is ");
for (int i=0;i<5;i++)
{
printf("%d \t",arr1[i]);
}
printf("\narr2 before swaping is ");
for (int i=0;i<5;i++)
{
printf("%d \t",arr2[i]);
}


swap(arr1,arr2,5);
printf("\narr1 after swaping is ");
for (int i=0;i<5;i++)
{
printf("%d \t",arr1[i]);
}
printf("\narr2 after swaping is ");
for (int i=0;i<5;i++)
{
printf("%d \t",arr2[i]);
}	
	
	
}
void swap(int arr1[],int arr2[],int size)
{
for(int i=0;i<size;i++)
{	
int temp[5];
 temp[i]=arr1[i];
arr1[i]=arr2[i];
arr2[i]=temp[i];	
	
}	
	
}	