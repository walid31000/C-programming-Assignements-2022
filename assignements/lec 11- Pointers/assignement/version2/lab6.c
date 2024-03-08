#include<stdio.h>
void copy_array (int *ptr1,int *ptr2,int size);
int main ()
{
   int i;
   int arr1[10],arr2[10];
    printf("please enter  arr1 elements  \n");
   for(i=0;i<10;i++)
   {
     scanf("%d",&arr1[i]);
    }

    printf("please enter  arr2 elements  \n");
    for(i=0;i<10;i++)
    {
      scanf("%d",&arr2[i]);
    }
    copy_array (arr1,arr2,10);
    printf(" the arr1 after swaping is: \n");
    for(i=0;i<10;i++)
    {
     printf("%d\t",arr1[i]);
    }

    printf("\n the arr2 after swaping is: \n");
    for(i=0;i<10;i++)
    {
      printf("%d\t",arr2[i]);
    }


}
    void copy_array (int *ptr1,int *ptr2,int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		temp=*(ptr2+i);
		*(ptr2+i)=*(ptr1+i);
        *(ptr1+i)=temp;
		
	}
	
}