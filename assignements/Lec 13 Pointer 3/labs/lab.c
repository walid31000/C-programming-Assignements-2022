#include<stdio.h>

int main ()
{
	int i,max;
	int arr[10];//={5,25,15,10,50,70,30,20,90,40};
	//int (*ptr)[10]=&arr;  //pointer to an array of 10 integers
	
	int *ptr=arr;
	
	printf("please enter your element array \n");
   for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	
  
	    //get the maximum number
		max=*ptr;//initialise max with the first element of the array
		   for(i=1;i<10;i++)
   {		   
		 if(*(ptr+i)>max)
		   {
		 	max=*(ptr+i);
		    }
	}
	printf("the maximum element in your array is %d  ",max);
	
}	