#include<stdio.h>
int search(int array[],int size, int element);
int main ()
{
	int i,j,var;
	int arr[10];
	printf("please enter th element array \n");
	for(i=0;i<=9;i++)
		scanf("%d",&arr[i]);
	
	printf("your array element \n");
	for(i=0;i<=9;i++)
	printf("%d \t",arr[i]);
 printf("\nplease enter en element to search for \n");
 scanf("%d",&var);
 int result=search(arr,9,var);
 

 printf("\nthe last occurence of %d is at index %d \n", var,result);
 
 
}



int search(int array [],int size, int element)
{
	int i,j;
	
	
   int flag=-1;
 
	for(i=0;i<=size;i++)		
	{	
        
	  if(array[i]==element)
	  {  
	    {
           flag= i;
        } 
         	 
		
	  }
	}  
	  
	  
      return flag; 
 
} 