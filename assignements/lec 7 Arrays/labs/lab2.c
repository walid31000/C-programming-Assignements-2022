#include<stdio.h>
int main ()
{
	int i,sum=0;
	float avg; 
	int arr[10];
	for(i=0;i<=9;i++)
		
		{
	         printf("enter element %d ",i+1);
	         scanf("%d",&arr[i]);
	         sum=sum+arr[i];
		}
	           
			   
			   printf("the summition= %d \n",sum);
	           avg=(float)sum/10;
	           printf("the average =%f \n",avg);
}	