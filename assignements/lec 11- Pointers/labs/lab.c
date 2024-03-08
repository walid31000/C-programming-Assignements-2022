#include<stdio.h>
void fun(int *sum,int *sub,int x,int y);
int main ()
{
	int x,y,sum,sub;
	
	printf("please enter the value of x and y \n");
	scanf("%d%d",&x,&y);
	fun(&sum,&sub,x,y);
	printf("the result of summution= %d\n" ,sum);
	printf("the result of substracion= %d" ,sub);
	
}
void fun(int *sum,int *sub,int a,int b)
{
	 *sum=a+b;
	 *sub=a-b;
	
	
}	