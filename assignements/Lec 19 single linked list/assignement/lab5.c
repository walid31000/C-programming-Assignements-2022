# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>


Node_t* RverseList(Node_t*Start);

int main() 
{

    Node_t *Start=NULL;
    Start=CreateList(Start);
	DisplayList(Start);
Start= RverseList(Start);
printf("the list after reversing  \n");
DisplayList(Start);








}

Node_t* RverseList(Node_t*Start)
{
	Node_t* ptr,*next,*prev;
	prev=NULL;
	ptr=Start;
	while(ptr!=NULL)
	{
		next=ptr->Link;
		ptr->Link=prev;
		prev=ptr;
		ptr=next;
	}
	
      Start=prev;
	  return Start;
}	