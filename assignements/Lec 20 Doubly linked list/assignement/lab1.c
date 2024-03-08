#include "STD_TYPES.h"
#include "DoublyLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	uint32 NodeData,DataAfter;
		Node_t* Start=NULL;
			Start=CreatList(Start);
	printf("the list after creation is \n");
	DisplayList(Start);
	printf("please enter a node value to insert after  ");
	scanf("%d",&DataAfter);
	printf("please enter a node value to be inserted ");
	scanf("%d",&NodeData);
	
	 InsertAfter(Start,NodeData,DataAfter);
	 printf("the list after insertion is \n");
	 DisplayList(Start);
	
	
}

		