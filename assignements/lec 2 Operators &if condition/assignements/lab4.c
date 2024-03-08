#include<stdio.h>
int main(void)
{
	
	int x,y,z,w,c;
	printf("please enter a number of three digits\n");
	scanf("%d",&x);
	y=x%10;
	x=x/10;
	z=x%10;
	x=x/10;
	c=x%10;
	printf("the number you entered separated is %d\t%d\t%d",c,z,y);
}