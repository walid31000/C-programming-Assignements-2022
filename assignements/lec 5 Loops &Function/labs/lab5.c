#include<stdio.h>

void swap(void);

int x,y;
int main(void)
{
	
	printf("enter x and y \n");
	scanf("%d%d",&x,&y);
	printf("x befor swaping=%d\n",x);
	printf("y befor swaping=%d\n",y);
	swap();
	printf("x after swaping=%d\n",x);
	printf("y after swaping=%d\n",y);
	
}	

void swap(void)
{
	
	int temp=x;
	x=y;
	y=temp;
}	