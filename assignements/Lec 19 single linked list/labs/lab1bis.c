
# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>










int main()
{
	Node_t* Start=NULL;
	uint8 Count;
	Start=Creatlist(Start);
	DisplayList(Start);
    Count=CountNodes(Start);
	if(Count==-1)
	{
		printf("list is empty\n"); 
	}
	else
	{
		printf("number of nodes=%d ",Count);
	}	
		
}
 