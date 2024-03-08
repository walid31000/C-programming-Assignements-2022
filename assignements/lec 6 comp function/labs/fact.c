#include<stdio.h>
int fact (int number);
int main(void)
{
  int num,res;
  printf("enter a number ");
  scanf("%d",&num);
  res=fact(num);
  printf("the factorial = %d",res);
}
int fact (int number)
{
	if(number<=1)
	{
     return 1;
	}
		
	else
	{
		return (number*fact(number-1));
	}
	
	
}