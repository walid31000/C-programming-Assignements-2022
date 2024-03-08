#include<stdio.h>
int ocur (int array[],int size,int number);
int main ()
{
	int i,num,flag;
	int arr[10];
	printf("please enter the array elements \n");
	for(i=0;i<=9;i++)
	{	
        scanf("%d",&arr[i]);
	}
	
	printf("the array elemnts= ");
	for(i=0;i<=9;i++)
		printf("%d \t",arr[i]);
	
	printf("\nplease enter a number to check  ");
	scanf("%d",&num);
	
	for(i=0;i<=9;i++)
	{
       if (arr[i]==num)
		{	flag=i;
		
         break;
		}
		else
			flag=-1;
	}  	
printf("the first occurence of the number %d is %d \n",num,flag);

}	
