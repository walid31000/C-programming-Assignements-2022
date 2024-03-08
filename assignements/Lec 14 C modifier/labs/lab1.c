#include<stdio.h>
#include"STD_TYPES.h"
int main ()
{
	long double *x;
	printf("sizeof(pointer)=%d\n",sizeof(x));
	printf("sizeof(char)=%d\n",sizeof(char));
	printf("sizeof(short int)=%d\n",sizeof(short int));
	printf("sizeof(long int)=%d\n",sizeof(long int));
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("sizeof(float)=%d\n",sizeof(float));
	printf("sizeof(double)=%d\n",sizeof(double));
	printf("sizeof(long)=%d\n",sizeof(long));
	printf("sizeof(long double)=%d\n",sizeof(long double));
}	