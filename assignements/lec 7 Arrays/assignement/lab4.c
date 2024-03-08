#include<stdio.h>
int fib(int x);
//program that calculate fabionaci number using recursion function
int main ()
{
	int num,result;
printf("please enter a number ");
scanf("%d",&num);
result=fib(num);
printf("the %d fibonacci number is %d",num,result);	
	
	
	
}
int fib(int x)
{
	if((x==0||x==1))
		return 1;
	else
	return (fib(x-1)+fib(x-2));
}	