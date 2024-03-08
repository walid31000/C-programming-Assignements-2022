#include<stdio.h>
#include "cal.h"


int main()
{
	float a,b,result;
	
	char op;
	printf("please enter a num1 :");
	scanf("%f",&a);
	
	printf("please enter a num2 :");
	scanf("%f",&b);
	
	printf("please choose an operation ");
	scanf(" %c",&op);
	switch  (op)
  {	
	
	case '+':result=add(a,b);
	printf("the result of addition is %.0f",result);break;
	
	case '-':result=sub(a,b);
	printf("the result of substraction is %.0f:",result);break;
	
	case '*':result=mul(a,b);
	printf("the result of multiplication is %.0f:",result);break;
	
	case '/':result=div(a,b);
	printf("the result of addition is %.2f:",result);break;
	
	default: printf("wrong operation ");break;
  }

}  