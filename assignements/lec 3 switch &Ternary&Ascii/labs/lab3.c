#include<stdio.h>
int main(void)
{
	int num,result;
	printf("please enter a number \n");
	scanf("%d",&num);
	result=(num<<3)+num;
	printf("the number times 9=%d",result);
	return 0;
}