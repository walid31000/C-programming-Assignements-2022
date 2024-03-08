#include<stdio.h>
int main(void)
{
	int i=1,x;
	printf("please enter a value of x\n");
	scanf("%d",&x);
	while(i<=x)
	{
		printf("%d*%d =%d\n",x,i,x*i);
i++;
	}
}	