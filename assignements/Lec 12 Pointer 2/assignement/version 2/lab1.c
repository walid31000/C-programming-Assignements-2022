#include<stdio.h>


int main()
{
	int array[10]={5,3,9,5,7,10,5,8,7,4};
    int *arr[10];
	int i,max=array[0];
	for(i=0;i<10;i++)
	{
		arr[i]=&array[i];
	}
	for(i=1;i<10;i++)
	{
		if(*arr[i]>max)
			max=*arr[i];
	}
	printf("the maximuum number is %d\n",max);
	
	for(i=0;i<10;i++)
	{
		printf("%d \t",*arr[i]);
	}
	
	
}