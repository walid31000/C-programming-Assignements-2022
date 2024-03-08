#include<stdio.h>

int delete (int array[],int size,int del);
int main ()
{
	int i,var;
	int arr[10];
	printf("please enter the array elements \n");
	for(i=0;i<=9;i++)
    {    
         scanf("%d",&arr[i]);		
    }
	 printf("the array before deletion is \n"); 
        for(i=0;i<=9;i++)
			printf("%d\t",arr[i]);
	
	     printf("\nplease enter a value you want to delete\n");
         scanf("%d",&var);
          
		int result=delete(arr,10,var);
		if(result==-1)
			printf("element not found");
		else
		{	
		    printf("\nthe array after deletion is \n"); 
		    for(i=0;i<9;i++)
			   printf("%d\t",arr[i]);
 
        } 
}

int delete (int array[],int size,int del)
{
	int j,i;
	
	for(j=0;j<size;j++)
	    {
			
	       if (array[j]==del)
		   {   
              for(i=j;i<size-1;i++)	 
			  {	  
			  array[i]=array[i+1];
			  }		   
              	return 1;	   
		   }
		   
		}

	return -1;	
}		