#include<stdio.h>
int fib(int x);
//program that calculate fabionaci number using loops
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
	while((x==0)||(x==1))
	{

	    return 1;
	}   
	for (i=x-2;i<x-1;i++)
	    return ((x-1)+(x-2));
     
    
}	