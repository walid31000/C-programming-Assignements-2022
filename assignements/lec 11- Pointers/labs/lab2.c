#include<stdio.h>
int add(int*ptr1,int*ptr2);
int main ()
{
	int x,y;
	printf("please enter the value of x and y \n");
	scanf("%d%d",&x,&y);
	int result=add(&x,&y);
	printf("the result is %d" ,result);
	
	
}
int add(int*ptr1,int*ptr2)
{
	int sum=*ptr1+*ptr2;
	return sum;
	
}	