
//size of enum
#include<stdio.h>

typedef enum value
	{
		green=50,
		yello=60,
	}colour;
	
int main()
{
	enum value s1;
	printf("size of enum=%d\n",sizeof(s1));// print 4 
	printf("size of enum member=%d",sizeof(green));// print 4 size of integer
}