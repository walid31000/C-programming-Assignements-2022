# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>


uint32  GetNodeData (Node_t* Start);

int main() 
{
     uint32 result;
    Node_t *Start=NULL;
    Start=CreateList(Start);
	DisplayList(Start);
	
result= GetNodeData(Start);
printf("the data of the middle node is :%d",result);


}


uint32  GetNodeData (Node_t* Start)
{
	Node_t* ptr=Start;
	uint8 i;
	uint32 data;
	uint8 middle=CountNodes (Start)/2;
	if(middle==0)
	{
		data=Start->Info;
	}
     else
	{	 
	
	     for(i=0;i<=middle/2;i++)
	    {
		ptr=ptr->Link;
	    }
        data=ptr->Info;
	}	
return data;
}
   
	