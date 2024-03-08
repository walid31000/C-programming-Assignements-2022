#include<stdio.h>

int main ()
{
	int arr[5]={1,2,3,4,5};
	int (*ptrarr)[5]=&arr;
	int *ptr=arr;
	
	//printf("*ptr=%d \t *ptrarr=%d\n",*ptr,*ptrarr);
	//printf("ptr=%d \t *ptrarr=%d\n",ptr,*ptrarr);
	
	//printf("*(ptr+1)=%d \t *(*ptrarr)=%d",*(ptr+1),*(*ptrarr));
	printf("ptr=%d \t *(*(ptrarr)+3)=%d",ptr,*(*(ptrarr)+3));
}