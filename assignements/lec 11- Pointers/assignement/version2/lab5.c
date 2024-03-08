#include<stdio.h>
void copy_array (int *ptr1,int *ptr2,int size);
int main ()
{
int i;
int arr1[10],arr2[10];
printf("please enter your array's elements  \n");
for(i=0;i<10;i++)
{
  scanf("%d",&arr1[i]);
}
copy_array (arr1,arr2,10);
printf(" the array 2 after copying is: \n");
for(i=0;i<10;i++)
{
  printf("%d\t",arr2[i]);
}

}
void copy_array (int *ptr1,int *ptr2,int size)
{
	for(int i=0;i<size;i++)
	{
		*(ptr2+i)=*(ptr1+i);
		
		
	}
	
	
	
}