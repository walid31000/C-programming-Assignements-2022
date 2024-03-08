#include<stdio.h>
int cube(int x);

int main ()
{
int num;	
printf("please enter a number  ");
scanf("%d",&num);
int result=cube(num);
printf("the cube of %d =%d",num,result);	
	
	
}
int cube(int x)
{
	
	
	return x*x*x;
	
}	