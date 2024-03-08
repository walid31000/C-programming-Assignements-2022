#include<stdio.h>
void insert (int arr[],int size,int value,int pos);
int main ()
{
	int i,j,var,pos;
	int data[6]={10,20,30,50,60};
/*	printf("please enter your array \n");
	for(i=0;i<6;i++)
	{
	    printf("enter the element %d   ",i+1);
        scanf("%d",&data[i]);
	}*/
	printf("please enter a value and position \n");
	scanf("%d%d",&var,&pos);
	insert(data,6,40,4);
	
	printf("the array after insertion  \n");
	for(j=0;j<6;j++)
		printf("%d\t",data[j]);
	
}


void insert (int arr[],int size,int value,int pos)	
{
  int i;
  for (i=size-1;i>=pos;i--)
  {
	  arr[i]=arr[i-1];
	  
  } 
 arr[pos-1]=value; 
	
	
}	