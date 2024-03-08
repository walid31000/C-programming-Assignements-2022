# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>


uint32  GetSumNodes (Node_t* Start);

int main() 
{
     uint32 result;
    Node_t *Start=NULL;
    Start=CreateList(Start);
	result=GetSumNodes (Start);
	printf("the sum of node's data is %d\n",result);
	
	
	
	
	
}	


uint32  GetSumNodes (Node_t* Start)
{
	uint8 i;
	uint32 sum=0;
	Node_t* ptr=Start;
	
	while(ptr!=NULL)
	{
		sum=sum+(ptr->Info);
		ptr=ptr->Link;
	}
	return sum;
}	