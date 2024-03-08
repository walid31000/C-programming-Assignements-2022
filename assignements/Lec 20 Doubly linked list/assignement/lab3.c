#include "STD_TYPES.h"
#include "DoublyLinkedList.h"
#include <stdlib.h>
#include <stdio.h>


int main()
{
	uint32 DeleteData;
		Node_t* Start=NULL;
			Start=CreatList(Start);
	printf("the list after creation is \n");
	DisplayList(Start);
	printf("please enter a node value to be deleted ");
	scanf("%d",&DeleteData);
	
	Start=DeleteNode(Start, DeleteData);
	 printf("the list after deletion is \n");
	 DisplayList(Start);
	
	
}