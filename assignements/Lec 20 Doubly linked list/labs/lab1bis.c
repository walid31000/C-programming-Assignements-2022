
# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>










int main()
{
	Node_t* Start=NULL;
	uint32 DataInsertAfter,NodeVal,DataInsertBefor,position,DeletedeVal; 
	uint8 Count;
	Start=CreatList(Start);
	
	DisplayList(Start);
	
	//printf("Insert after option :enter value of a node to insert before  :");
	//printf("Insert at position :enter a position of a node to insert at  :");
	//scanf("%d",&DataInsertAfter);
	//scanf("%d",&DataInsertBefor);
	//scanf("%d",&position);
	printf("enter a value of node to be deleted \n");
	scanf("%d",&DeletedeVal);
	//printf("Insert the node data :\n");
	//scanf("%d",&NodeVal);
   Start=DeleteNode(Start, DeletedeVal);
	
	DisplayList(Start);
	
	
		
}
 