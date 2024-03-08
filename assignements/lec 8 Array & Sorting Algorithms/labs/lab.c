#include<stdio.h>
int search(int Arr[],int size,int val);

int main()
{
	int ser[6];
	int del, result;
	printf("please enter an array  :\n");
	for(int i=0;i<=5;i++)
	{
		scanf("%d",&ser[i]);
	}
	printf("your array is  :\n");
	for(int j=0;j<=5;j++)
	{
		printf("%d\t",ser[j]);
	}
	
	printf("\nplease enter the value to be deleted  :\n");
	scanf("%d",&del);
	result=search(ser,6,del);
	if(result==1)
	{
		printf("the array after deletion is  ");
		for(int k=0;k<=4;k++)
	    {
		printf("%d\t",ser[k]);
	    }
	}
	else if (result==-1)
	{
      	printf("the value to be deleted doesn't exist  :\n");
	
		
	}	
	
}
int search(int Arr[],int size,int val)
{

int i,j;
   for (i=0;i<size;i++)
   {
	   if(Arr[i]==val)
	   {
		   for(int j=i;j<size-1;j++)
		   {   
		    Arr[j]=Arr[j+1];
			
		   }
          return 1;
	   }   
	   
   }
   
   return -1;


 
}	