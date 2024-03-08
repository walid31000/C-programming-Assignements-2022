#include "STD_TYPES.h"
#include "DoublyLinkedList.h"
#include <stdlib.h>
#include <stdio.h>


int main()
{
	uint32 NodeData,DataBefore;
		Node_t* Start=NULL;
			Start=CreatList(Start);
	printf("the list after creation is \n");
	DisplayList(Start);
	printf("please enter a node value to insert before  ");
	scanf("%d",&DataBefore);
	printf("please enter a node value to be inserted ");
	scanf("%d",&NodeData);
	Start=InsertBefore(Start,NodeData, DataBefore);
	 printf("the list after insertion is \n");
	 DisplayList(Start);
	
	
}