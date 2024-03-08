#include<stdio.h>
	
int main ()
{
	int i=0;
	char var,dec;
char *ptr[10]={"property","probability","program","process","progress","problem","propagation","performance","perfect","perfume"};
printf("please enter the first letter of your word :\n");

 
		
  
      while(i<10)
        {	
	         
		          scanf("%c",&var); 
	            if(*(*(ptr+i))==var)
					
			   {	
			            
			        scanf("%c",&dec);
				    printf("do you mean %s ? yes or no:\n",*(ptr+i));
			   	scanf("%c",&dec);
					if(dec=='y')
					{
						printf("your word is %s",*(ptr+i));break;
					}
                 else
				 { 
					 printf("please enter the next letter of your word :\n");
					  i++;
                 //   printf("do you mean %s ? yes or no:\n",*(ptr+i));
				 }					
			   }	
                  
			   
	       	   
		  
		  
		  
	        
		   
            
			
		}	
        // printf("invalid name \n");
          
		   //printf;
   	
	
}          	