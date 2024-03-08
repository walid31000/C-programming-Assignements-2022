#include<stdio.h>
	
int main ()
{
	int i,j,flag;
	char var;
char *ptr[4]={"ahmed","gamal","mohamed","emad"};
	printf("tell me the first letter of your name \n");
	scanf("%c",&var);
	for(i=0;i<4;i++)
	{
			
		if(*(*(ptr+i))==var)
		{
			printf("welcome %s \n", *(ptr+i));
			
			break;
			
		}
	  
  
        
					
	}	
	if (i==4)
			printf("invalid input \n");
	
}	