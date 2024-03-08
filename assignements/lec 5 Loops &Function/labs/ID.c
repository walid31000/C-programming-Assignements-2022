#include<stdio.h>
int main(void)
{
    int ID,password,counter=0;
	printf("please enter your ID \n");
	scanf("%d",&ID);
	
	
	switch(ID)
	{
	    case 1234:printf("please enter your password \n");
	              scanf("%d",&password);
		
		
		while((counter<2)&&(password!=7788))
		{
         printf("try again\n");
		 scanf("%d",&password);
         counter++;		 
	    }
		if(password==7788)
		{
			printf("welcome Ahmed \n");
		}
		else
		{
			printf("no more tries \n");
		}
          break;		
			
    	case 5678:printf("please enter your password \n");
	              scanf("%d",&password);
		
		
		while((counter<2)&&(password!=5566))
		{
         printf("try again\n");
		 scanf("%d",&password);
         counter++;		 
	    }
		if(password==5566)
		{
			printf("welcome Amr \n");
		}
		else
		{
			printf("no more tries \n");
		}
          break;
	
	   case 9870:printf("please enter your password \n");
	              scanf("%d",&password);
		
		
		while((counter<2)&&(password!=1122))
		{
         printf("try again\n");
		 scanf("%d",&password);
         counter++;		 
	    }
		if(password==1122)
		{
			printf("welcome Wael \n");
		}
		else
		{
			printf("no more tries \n");
		}
          break;
	   
    	default:printf("you're not registered \n");break;
	}
}	