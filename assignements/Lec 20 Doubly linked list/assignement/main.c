#include "STD_TYPES.h"
#include <stdlib.h>
#include <stdio.h>
#include "DoublyLinkedList.h"


int main()
{
	
	uint32 Data,Val,Dataafter,DataBefore;
	//printf("please enter a data \n");
	//scanf("%d",&Data);
	Node_t* Start=NULL;
	//Start= InsertInEmpty(Start,Data);
	//printf("list after insertion is \n");
	//DisplayList(Start);
	//printf("please enter a value to insert \n");
	//scanf("%d",&Data);
	//Start=InsertAtBegining(Start,Data);
	//printf("the list after insertion at beginning is \n");
	//printf("the list after insertion at End is \n");
	// InsertAtEnd(Start,Data);
	Start=CreatList(Start);
	printf("the list after creation is \n");
	DisplayList(Start);

	//printf("please enter a data  insert before  \n");
	//scanf("%d",&DataBefore);
		//printf("please enter a data to be insert   \n");
	//scanf("%d",&Val);
	 //InsertAfter(Start,Val,Dataafter);
	 //Start=InsertBefore(Start,Val,DataBefore);
	 	printf("please enter a node data to be deleted   \n");
	scanf("%d",&Val);
	Start=DeleteNode(Start,Val);
	 DisplayList(Start);
}	