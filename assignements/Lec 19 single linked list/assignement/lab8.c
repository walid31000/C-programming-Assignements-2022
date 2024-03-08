# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>


uint32  MaxData (Node_t* Start);

int main() 
{
     uint32 result;
    Node_t *Start=NULL;
    Start=CreateList(Start);
	result=MaxData (Start);
	printf("the biggest element in the list   is %d\n",result);
	
	
}	



uint32  MaxData (Node_t* Start)
{
	Node_t* ptr=Start;
	uint8 i;
	uint32 Max;
	//uint8 nbr=CountNodes (Start);
	Max=ptr->Info;
	while(ptr!=NULL)
		
	
	{
		
		if((ptr->Info)>Max)
		Max=ptr->Info;
		ptr=ptr->Link;
	}

    return Max;
}	
	
	
	
	
	
	
