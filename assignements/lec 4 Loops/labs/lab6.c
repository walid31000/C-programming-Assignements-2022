#include<stdio.h>
int main(void)
{// program to calculate the factorial number using do while
	int result=1,fact=1,x;
	printf("please enter the value of x");
	scanf("%d",&x);
	
	
	do
	{
		
	    result=fact*result;
		fact++;
		
		}while(fact<=x);
	printf("factorial=%d",result);
}
	