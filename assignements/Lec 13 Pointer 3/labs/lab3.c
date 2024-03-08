#include<stdio.h>

int main ()
{
	int arr[3][4]={{1,2,3,4},
	                       {5,6,7,8},
	                       {9,10,11,12}};
						  
    int (*ptr)[4]=arr;

	printf("ptr=%d\t  arr=%d \n",ptr,arr);
	printf("*(*ptr)=%d\t   *(*(ptr+1))=%d\t    *(*(ptr+2))=%d  ",*(*ptr),*(*(ptr+1)),*(*(ptr+2)));
}	