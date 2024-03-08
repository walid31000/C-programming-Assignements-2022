#include<stdio.h>
int check (char data[],int size);
int main ()
{
	char arr[20];
	printf("please enter your string\n");
	scanf("%20s",arr);
	printf("your string is %s\n",arr);
	int result=check(arr,20);
	if(result==1)
		printf("some characters are repeated\n");
	else
		printf("all characters are distinct\n");
	
	
}



int check (char data [],int size)
{
	int i,j;
	int flag;
   for(i=0;i<size-1;i++)
   { 
    
	  
		  
	        for(j=i+1;j<size;j++)
	      {
	              if(data[i]==data[j])
	               {
		  
                        return 1;
	                }
           }
 	 
    }     	  
 	   return -1;
			   
}
