#include<stdio.h>
void cal (int x,int y,int *sum,int *sub);
int main ()
{
	int arr[4]={1,2,3,4};
	int *ptr=&arr[1];
	printf("%d\n",arr);
	printf("%d\n",&arr[0]);
	printf("%d\n",&arr[1]);
	printf("%d\n",&arr[2]);
	printf("%d\n",&arr[3]);
		printf("%d\n",ptr);

	
	
}