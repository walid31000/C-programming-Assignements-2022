#include "STD_TYPES.h"
#include<stdio.h>

#include "QueueCircularArray.h"

uint32 QueueArray[Array_Size];
sint32 F,R;




void Init(void)
{
	F=-1;
	R=-1;
	
}
uint8 IsEmpty(void)
{
	uint8 retval;
	if(F==-1)
	{
		retval=1;
	}
	else
	{
		retval=0;
	}
	return retval;
	
	
	
	
}	
uint8 IsFull(void)

{
	uint8 retval;
	if((F==R+1)||(F==0&&R==Array_Size-1))
	{
		retval=1;
	}
	else
		retval=0;
	return retval;
	
}	
uint8 GetSize(void)
{
	uint8 count=0;
	uint8 i;
	if(F==-1)
	{
		return 0;
	}
	else if(F<=R)
	{
		
			return R-F+1 ;
		
	}	
		else //CASE if(F>R)
        		{
		         	 return (Array_Size- F) + (R + 1);
					   
		        }
				
}				
		
			
void Insert(uint32 Val)
{
	if (!IsFull())
	{
		if(IsEmpty())
		{
			R=F=0;
		}	
	     else if(R== Array_Size-1)
	     {
		      R=0;
	
       	}
	   else 
	   {
		   R++;
	
	    }
		QueueArray[R]=Val;
	}
	
}	
	
uint32 Delete(void)
{
	uint32 retval;
		if (!IsEmpty())
	{
		retval=QueueArray[F];//retrieve data first
		if(F==R)// case of the only node
		{
			F=R=-1;
		}
		
	    else if(R==QueueArray[Array_Size-1])
	  {
		F=0;
		
	   }
	   else
	    {
		
		F++;
	     }
	
	}
	else
	{
		printf("the queue is empty \n");
	}
	return retval;
	
	
}	
	
	
	
uint32 Peek(void)
{
		if (!IsEmpty())
	{	
	   return QueueArray[F];
	}
}
	


void Display(void)
{
		
	    uint8 i;
	if(F==-1)
	{
		printf("the queue is empty \n");
	}
	else if (F<=R)
	{
		for(i=F;i<=R;i++)
		{
			printf("%d\t",QueueArray[i]);
		}
	}	
		else if(F>R)
        		{
		         	   for(i=F;i<=Array_Size-1;i++)
		              {
			              printf("%d\t",QueueArray[i]);
		               }
		             for(i=0;i<=R;i++)
		              {
			            printf("%d\t",QueueArray[i]);
		               }
		        }
			
}	
