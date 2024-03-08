#include<stdio.h>

void swap();
int x=10,y=20;
int main(void)
{
	printf("the value of x and y befor swaping is %d %d  \n",x,y);
	
	swap();
	printf("the value of x and y after swaping is %d %d  \n",x,y);
	
	
}
void swap()
{
int temp=x;
x=y;
y=temp;
}	