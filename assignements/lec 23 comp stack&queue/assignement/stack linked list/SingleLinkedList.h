#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

typedef struct node
{
	uint32 Info;
	struct node* Link;
}Node_t;


void DisplayList(Node_t* Start);
uint8 CountNodes(Node_t* Start);
sint8 SearchList(Node_t* Start,uint32 Val);
Node_t* InsertAtBeginning(Node_t* Start, uint32 Data);
void InsertAtEnd(Node_t* Start, uint32 Data);
Node_t* CreateList(Node_t* Start);
void InsertAfter(Node_t* Start,uint32 NodeData,uint32 DataAfter);
Node_t* InsertBefore(Node_t* Start,uint32 NodeData,uint32 DataBefore);
Node_t* InsertAtPos(Node_t* Start,uint32 NodeData,uint8 Position);
Node_t* DeleteNode(Node_t* Start,uint32 NodeVal);
Node_t* ReverseList (Node_t* Start);
Node_t* DeleteAtFirst(Node_t* Start);
#endif