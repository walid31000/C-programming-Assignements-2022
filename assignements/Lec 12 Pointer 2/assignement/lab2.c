#include<stdio.h>
void swap(int a ,int b);

int main ()
{
	void (*funcptr)(int ,int )=&swap;
	int x,y;
	printf("please enter x  ");
	scanf("%d",&x);
	printf("please enter y  ");
	scanf("%d",&y);
	
	(*funcptr) (x,y);
	//printf("the value of x after swaping is %d \n",x);
	
	//printf("the value of y after swaping is %d \n",y);
	
	

}



void swap(int a ,int b)
{
	
	a=a^b;
	b=a^b;
	a=a^b;
	printf("the value  after swaping is x=%d  \n",a);
	printf("the value  after swaping is y=%d  \n",b);
}