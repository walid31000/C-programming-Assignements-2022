#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H



typedef struct node
{
	uint32 Info;
	struct node* Link;
}Node_t;
void DisplayList(Node_t* Start);
uint8 CountNodes (Node_t* Start);
sint8 SearchList(Node_t* Start,uint32 Val);
Node_t* InsertAtBeginning(Node_t* Start, uint32 Data);
void InsetAtEnd(Node_t* Start, uint32 Data);
Node_t* Creatlist(Node_t* Start);



#endif