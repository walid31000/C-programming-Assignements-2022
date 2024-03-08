#include<stdio.h>


int main()
{
	int arr[10];
	int sum=0;
	float avg;
	for(int i=0;i<=9;i++)
	{	
	 printf("enter element %d:",i+1);
	 scanf("%d",&arr[i]);
	 sum=sum+arr[i];
	}
	printf("sum of array element =%d \n",sum);
	avg=(float)sum/10.0;
	printf("average of array element =%f \n",avg);
	
	
}	