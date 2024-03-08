#include<stdio.h>
int main(void)
{
	int x=70,y=160,z=20;
	int max=(x>y)? ((x>z)? x:((y<z)?z:y)):((y<z)?z:y);
	printf("the maximum is %d",max);
}