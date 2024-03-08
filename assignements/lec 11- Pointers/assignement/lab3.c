#include<stdio.h>
void print_reverse (int *ptr);
int main ()
{
int i;
int arr[10];
printf("please enter your array's elements  \n");
for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
printf("the array in reverse order is \n");
print_reverse(arr);


}




void print_reverse (int *ptr)
{
	int i;
	for(i=9;i>=0;i--)
		printf("%d\n",*(ptr+i));
		
	
	
}