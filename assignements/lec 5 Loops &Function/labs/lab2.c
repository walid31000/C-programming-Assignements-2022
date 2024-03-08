#include<stdio.h>
int main(void)
{
    int ID,password;
    int i=0;
    printf("please enter your ID  ");
    scanf("%d",&ID);
    switch(ID)
    {
	     case 1234:
	     printf("please enter your password\n");
	     scanf("%d",&password);
	
	    while((i<2)&&(password !=7788))
	    {
		    printf("try again\n");
		    scanf("%d",&password);
		    i++;
		} 
		 if(password==7788)
		 {
            printf("welcome Ahmed");
		 }
         else		 
         {	
		   printf("no more tries");	
	
		 }
         break;


         case 5678:
	     printf("please enter your password\n");
	     scanf("%d",&password);
	
	     while((i<2)&&(password !=5566))
	     {
		   printf("try again\n");
		   scanf("%d",&password);
		   i++;
	     } 
		  if(password==5566)
		 {
            printf("welcome Amr");
		 }
         else		 
         {	
		    printf("no more tries");	
	
		 }
           break;

    }	
}