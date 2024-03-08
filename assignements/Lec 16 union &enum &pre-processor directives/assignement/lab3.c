#include<stdio.h>
# include"STD_TYPES.h"
# include"BIT_MATH.h"

     



	uint32 VAR; 
	uint32 BIT_NUM;
	uint32 result,result2,result3,result4;

	
	
	
int main()
{
#define VAR     5
#define BIT_NUM     2	
	// printf("please enter the value of VAR \n");
   //scanf("%d",&VAR);
   
  // printf("please enter the  bit number \n");
   //scanf("%d",&BIT_NUM);
   

   SET_BIT(VAR,BIT_NUM);
printf("the number after setting the bit is %d \n ",VAR);
 //printf("please enter the value of VAR \n");
   //scanf("%d",&VAR);   

CLR_BIT(VAR,BIT_NUM);
printf("the number after clearing the bit is %d \n ",VAR);    
 //printf("please enter the value of VAR \n");
   //scanf("%d",&VAR);

 TOG_BIT(VAR,BIT_NUM);
printf("the number after toggling the bit is %d \n ",VAR);  
 //printf("please enter the value of VAR \n");
   //scanf("%d",&VAR);  

  GET_BIT(VAR,BIT_NUM);
printf("the bit required  is %d \n ",VAR);   
  
}