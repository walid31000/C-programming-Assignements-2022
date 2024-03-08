#include<stdio.h>

int get_max(int x,int y);
int main(void)
{
	int x,y,maximum;
	printf("please enter two numbers  ");
	scanf("%d%d",&x,&y);
	maximum=get_max(x,y);
	printf("the maximum number is %d",maximum);
	
}

int get_max(int x,int y)
{
return int Max=(x>y) ?  x : y;
}	