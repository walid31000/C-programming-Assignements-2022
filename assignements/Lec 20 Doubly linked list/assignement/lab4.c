# include"STD_TYPES.h"
#include "DoublyLinkedList.h"
#include<stdio.h>
#include<stdlib.h>


Node_t* RverseList(Node_t*Start);

int main() 
{

    Node_t *Start=NULL;
    Start=CreatList(Start);
	DisplayList(Start);
Start= RverseList(Start);
printf("the list after reversing  \n");
DisplayList(Start);








}

Node_t* RverseList(Node_t*Start)
{
	Node_t* p1,*p2;
	p1=Start;
	p2=p1->Next;
	p1->Next=NULL;
	p1->Prev=p2;
	while(p2!=NULL)
	{
		p2->Prev=p2->Next;
		p2->Next=p1;
		p1=p2;
		p2=p2->Prev;
		
	}
	
      Start=p1;
	  return Start;
}