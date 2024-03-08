#include<stdio.h>
void cal (int x,int y,int *sum,int *sub);
int main ()
{
	int sum,sub;
	int a=20;
	int b=30;
	 cal(a,b,&sum,&sub);
	printf("the result of sum=%d \n",sum);
	printf("the result of sub=%d",sub);
}
	
void cal (int x,int y,int *sum,int *sub)
{
  *sum=x+y;
  *sub=x-y;



}
	