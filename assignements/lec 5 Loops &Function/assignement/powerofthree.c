#include<stdio.h>
int main()
{
	int x;
	printf("enter a number \n");
	scanf("%d",&x);
	
	while(x!=1)
	{
		if(x%3==0)
		{
			if(x==3)
			{
				printf("number is power of 3\n");break;	
			}
			else
			{	
				
				x=x/3;
            }
	    }
	    else
		{	
	     printf("%d is not a power of 3 \n",x);break;

			
		}
           
	}      
}	