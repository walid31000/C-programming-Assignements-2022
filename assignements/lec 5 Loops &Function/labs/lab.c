#include<stdio.h>
int main(void)
{
	int ID,password,count=1;
	
  
		 printf("please enter your ID: \n");
         scanf("%d",&ID);

         
 
	       if(ID==1234)
       
		 {   printf("please enter your password: \n");
            scanf("%d",&password);
		   
		    if(password==7788)
			{	
              printf("welcome Ahmed\n");
            }
		   
	        else
	    
		     {      
		       while(count<3)
	           {
		         printf("try again\n");
	             count++;
	             scanf("%d",&password);
                if(password==7788)
				{
                 printf("welcome Ahmed\n");break;
				}
                 				 
                 if(count==3)	
  			   
		         printf("incorrect password for 3 times.no more tries\n");
		  
	           }
		 
             }
		 }	  
             
			 
			 
			 
			 
	   else  if(ID==5678)
       
		 {   printf("please enter your password: \n");
            scanf("%d",&password);
		   
		    if(password==5566)
			{	
              printf("welcome Amr\n");
            }
		   
	        else
	    
		     {      
		       while(count<3)
	           {
		         printf("try again\n");
	             count++;
	             scanf("%d",&password);
                if(password==5566)
				{
                 printf("welcome Amr\n");break;
				}
                 				 
                 if(count==3)	
  			   
		         printf("incorrect password for 3 times.no more tries\n");
		  
	           }
		 
              }
		 }	  
		 
		 
		 
		else  if(ID==9870)
       
		{   printf("please enter your password: \n");
            scanf("%d",&password);
		   
		      if(password==1122)
			  {	
                printf("welcome Wael\n");
              }
		   
	           else
	    
		      {      
		          while(count<3)
	              {
		            printf("try again\n");
	                count++;
	                scanf("%d",&password);
                    if(password==1122)
				    {
                      printf("welcome Wael\n");break;
				    }
                 				 
                    if(count==3)	
  			   
		            printf("incorrect password for 3 times.no more tries\n");
		  
	              }
		 
              }
			  
			  
			  
			  
		 }	  
		 
		 
		 
		 
             else
		     {
			  printf("not registered \n");
		     }
	 
		 
	 
		 
}   