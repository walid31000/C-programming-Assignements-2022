#include<stdio.h>
int main(void)
{
	int x;
	printf("please enter a number");
	scanf("%d",&x);
	if(x&(x-1)==0)
		printf("the number is a power of 2");
	else
		printf("the number is not a power of 2");
}