#include<stdio.h>
int main(void)
{//program that check if the user enter 12 using while loop
	int result;
	printf("please enter the result of 3*4:  ");
			scanf("%d",&result);
	while(result!=12)
	{

		printf("try again\n");
		scanf("%d",&result);
	}
	printf("thanks");
}