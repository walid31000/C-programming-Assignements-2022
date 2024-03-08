#include<stdio.h>
int main ()
{
	int grade;
	printf("please enter your grade");
	scanf("%d",&grade);
	if((grade>=0)&&(grade<=100))
	{
		
		
	    if (grade<50)
	   {	
		printf("you failed");
	    }
	    else if (grade<65)
	   {
		printf("your rating is normal");
	    }
	   else if (grade<75)
		
	   {
	   printf("your rating is good");
	   } 
       else if (grade<85)
	   {	
	     printf("your rating is very good");
	   }
       else if (grade>85)
        {
	     printf("your rating is excellent");
        } 
	}	
	else 
	{
		printf("invalid input");
	}	
}
