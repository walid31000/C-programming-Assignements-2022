#include<stdio.h>
void swap_array (int *ptr1,int *ptr2,int size);

int main ()
{
int i;
int arr1[5]={1,2,3,4,5};
int arr2[5]={6,7,8,9,10};
printf("\narray 1 before swaping is ");
for(i=0;i<5;i++)
	printf("%d \t",arr1[i]);
printf("\narray 2 before swaping is ");
for(i=0;i<5;i++)
	printf("%d \t",arr2[i]);

swap_array(arr1,arr2,5);
printf("\narray 1 after swaping is ");
for(i=0;i<5;i++)
	printf("%d \t",arr1[i]);
printf("\narray 2 after swaping is ");
for(i=0;i<5;i++)
	printf("%d \t",arr2[i]);

}
void swap_array (int *ptr1,int *ptr2,int size)
{
  int i,temp;
    for(i=0;i<size;i++)
	{
		temp=*(ptr1+i);
		*(ptr1+i)=*(ptr2+i);
		*(ptr2+i)=temp;
	}

	
	
	
}