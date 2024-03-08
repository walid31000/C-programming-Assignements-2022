#include<stdio.h>
#include "bitMath.h"

int main()
{
	int num,result,bitnum;
	printf("enter a number ");
	scanf("%d",&num);
	printf("enter a bit number ");
	scanf("%d",&bitnum);
	result=SetBit(num,bitnum);
	printf("the number after setting =%d\n",result);
	result=ClrBit(num,bitnum);
	printf("the number after clearing =%d\n",result);
	result=TogBit(num,bitnum);
	printf("the number after Toggling =%d\n",result);
}