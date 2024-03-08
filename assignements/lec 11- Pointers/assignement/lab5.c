#include<stdio.h>
void copy_array (int *ptr1,int *ptr2,int size);

int main ()
{
int i;
int arr1[10]={5,10,20,25,30,35,40,45,50,60};
int arr2[10]={10,20,30,40,50,60,70,80,90,100};

printf(" arr1 elements are  ");
for(i=0;i<10;i++)
	printf("%d\t",arr1[i]);
copy_array(arr1,arr2,10);
printf("\nafter copying arr1 to arr2 \n");
for(i=0;i<10;i++)
	printf("%d\t",arr2[i]);



}



void copy_array (int *ptr1,int *ptr2,int size)
{
	int i;
  for(i=0;i<size;i++)
	*(ptr2+i)=*(ptr1+i);

	
}