#include<stdio.h>
int main ()
{
	int x=10;
	int *ptr=&x;
	printf("x befor change =%d\n",x);
	*ptr=20;
	printf("x after change =%d\n",*ptr);
	printf("the adress of ptr=%d\n",ptr);
	printf("the adress of x=%d\n",&x);
}	