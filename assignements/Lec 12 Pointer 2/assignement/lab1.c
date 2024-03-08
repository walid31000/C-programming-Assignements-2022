#include<stdio.h>

int main ()
{
	int i,max;
	int *ptr[10];//array of pointers to integers
	int arr[10];
	
	printf("please enter your element array \n");
   for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}	
	//creat array of pointer 
	
   for(i=0;i<10;i++)
	{
		ptr[i]=&arr[i];// Initialize the array of pointers to point to each element of the data array
			
	
		printf("the value of arr[%d] = %d \n ",i,*ptr[i]) ;
	}		
	    //get the maximum number
		max=*ptr[0];
		for(i=1;i<10;i++)
        {		   
		    if(*(ptr[i])>max)
		    {
		 	 max=*(ptr[i]);
		    }
	    }
	    printf("the maximum element in your array is %d  ",max);
	
}	