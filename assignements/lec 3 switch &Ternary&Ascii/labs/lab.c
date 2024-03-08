#include<stdio.h>
int main(void)
{
	int n1=70,n2=160,n3=20;
	int max= (n1>n2)? (n1>n3 ? n1:n3):(n2>n3 ? n2:n3 );
	printf("the max is %d",max);
}