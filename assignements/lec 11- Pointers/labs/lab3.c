#include<stdio.h>
void func(int num1,int num2,int *sum,int *sub);
int main ()
{
	int num1,num2,sum,sub;
	printf("please enter the value of x and y \n");
	scanf("%d%d",&num1,&num2);
	func(num1,num2,&sum,&sub);
	printf("the result of summation %d\n" ,sum);
	printf("the result of substruction is %d\n" ,sub);
	
}
void func(int num1,int num2,int *sumval,int *subval)
{
   *sumval=num1+num2;
	*subval=num1-num2;
	
	
	
	
}