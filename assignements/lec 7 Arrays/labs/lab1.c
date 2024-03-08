#include<stdio.h>
int main ()
{
	int i,j;
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf("please enter element number %d  ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("the element entered \n");
	for(j=0;j<10;j++)
	{
		printf("%d \n",arr[9-j]);
	}
	
}		