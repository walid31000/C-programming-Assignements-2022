#include<stdio.h>
int main(void)
{
	int x,i,sum=0;
	printf("please enter your values\n");
	for(i=0;i<10;i++)
		
	{
		
		scanf("%d",&x);
		sum=sum+x;
	}
	printf("the average is %f",(float)sum/10.0);
}