#include "../../STD_TYPES.h"
#include "SingleLinkedList.h"
#include "StackLinkedList.h"
#include <stdlib.h>
#include <stdio.h>





Node_t* Top;

void  Init(void)
{
	
Top=NULL;
	
}	
uint8 IsEmpty(void)
{
	
     uint8 Retval;
     if(Top==NULL)
	 {
		 Retval=1;
	 }
	else
    {
        Retval=0;
    }
    return Retval;
	
	
	
}	

uint8 GetSize(void)
{
	
	return CountNodes(Top);
}	
	
	
	

uint32 Peek(void)
{
	if(!IsEmpty())
	{
		
       return Top->Info;
	}
	else
	{
		printf("lstack is empty ");
	}
}	
	
	
	
	
void Push(uint32 Val)
{
   Top=InsertAtBeginning(Top, Val);
   
   
}  

uint32 Pop(void)
{
	uint32 retval;
    if(!IsEmpty())
	{
		retval=Top->Info;
		Top=DeleteAtFirst(Top);
	}
     else
	 {
        printf("List is empty \n");
	 }	
    return retval;
}	 
	
 void Display(void)
 {
	 printf("the stack is \n");
	 DisplayList(Top);
	 
	 
 }
 