#include "../STD_TYPES.h"
#include <stdlib.h>
#include <stdio.h>
#include "SingleLinkedList.h"


void DisplayList(Node_t* Start)
{
	Node_t* ptr = Start;
	if(Start == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->Info);
			ptr= ptr->Link;
		}
		printf("\n");
	}
}
uint8 CountNodes(Node_t* Start)
{
	uint8 Count =0;
	
	Node_t* ptr = Start;
	
	while(ptr!=NULL)
	{
		Count++;
		ptr=ptr->Link;
	}
	
	return Count;
}
sint8 SearchList(Node_t* Start,uint32 Val)
{
	sint8 Position=1;
	Node_t* ptr = Start;
	
	while(ptr!=NULL)
	{
		if(ptr->Info==Val)
		{
			break;
		}
		Position++;
		ptr=ptr->Link;
	}
	if(ptr==NULL)
	{
		Position = -1;
	}
	return Position;
	
}

Node_t* InsertAtBeginning(Node_t* Start, uint32 Data)
{
	/*Create the node*/
	Node_t* Temp = (Node_t*)malloc(sizeof(Node_t));
	
	Temp->Link= Start;
	Temp->Info = Data;
	Start = Temp;
	return Start;
}
void InsertAtEnd(Node_t* Start, uint32 Data)
{
	Node_t* ptr = Start;
	Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
	
	while(ptr->Link!=NULL)
	{
		ptr=ptr->Link;
	}
	
	ptr->Link = Temp;
	Temp->Info= Data;
	Temp->Link = NULL;
}

Node_t* CreateList(Node_t* Start)
{
	uint32 i, n, data;
	printf("Enter Number of nodes: ");
	scanf("%d",&n);
	
	if(n==0)
	{
		/*Do nothing*/
	}
	
	else
	{
		printf("Enter the 1st element: ");
		scanf("%d",&data);
		Start= InsertAtBeginning(Start,data);
		
		for(i=1;i<n;i++)
		{
			printf("enter the next data element: ");
			scanf("%d",&data);
			InsertAtEnd(Start,data);
		}
	}
	
	return Start;
}