#include<stdio.h>

int main ()
{
	int x;
	printf("enter the value of x  ");
	scanf("%d",&x);
	if((x&1)==0)
		printf("the number is even");
	else
		printf ("the number is odd");
}