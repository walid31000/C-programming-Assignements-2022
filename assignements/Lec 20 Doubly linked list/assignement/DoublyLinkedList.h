#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

typedef struct node
{
	uint32 Info;
	struct node* Next;
	struct node*Prev;
}Node_t;


void DisplayList(Node_t* Start);
Node_t* InsertInEmpty(Node_t* Start,uint32 Data);
Node_t* InsertAtBegining(Node_t* Start,uint32 Data);
void InsertAtEnd(Node_t* Start,uint32 Data);
 Node_t* CreatList(Node_t* Start);
void InsertAfter(Node_t* Start,uint32 NodeData,uint32 DataAfter);
 Node_t*InsertBefore(Node_t* Start,uint32 NodeData,uint32 DataBefore);
 Node_t* DeleteNode(Node_t* Start,uint32 NodeData);







#endif