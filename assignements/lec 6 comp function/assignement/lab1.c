#include<stdio.h>
int get_ones(int x);
int main ()
{

int num,result;
printf("please enter the number ");
scanf("%d",&num);
result=get_ones(num);
printf("the number of ones in %d is %d ",num,result);

}

int get_ones(int x)
{
	int ones=0;
	for(int i=0;i<=31;i++)
		ones=ones+((x>>i)&1);
	return ones;
}	