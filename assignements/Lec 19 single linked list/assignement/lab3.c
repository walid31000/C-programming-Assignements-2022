# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>




Node_t*  InsertAtPosition (Node_t* Start,uint32 pos,uint32 Val);
int main()
{

    uint32 pos;
	uint32 Val;
	Node_t *Start=NULL;
	
	Start=CreateList(Start);
	DisplayList(Start);
	printf("please enter a position to a node to be inserted  \n");
    scanf("%d",&pos);	//position which we insert node
   printf("please enter a value to be inserted  \n");
	 scanf("%d",&Val);
	 if(pos==1)
	 {
           Start=InsertAtBeginning(Start,Val);
	 } 
	else
	{	
	  InsertAtPosition (Start,pos,Val);
	} 
       printf("\nthe list after insertion is \n");
	DisplayList(Start);
}

Node_t*  InsertAtPosition (Node_t* Start,uint32 pos,uint32 Val)
{
	  uint32 i;
	Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
	 
	
	 Node_t* ptr=Start;

	 
  	
	
	    for (i=1;(i<pos-1)&&(ptr!=NULL);i++)
	   {
	
		ptr=ptr->Link;
			
		
	   }	
	   if(ptr==NULL)
	  {
		printf("position not found\n");
	   }

     else
     {
		Temp->Info=Val;
 	    Temp->Link=ptr->Link;
		ptr->Link=Temp;
	  }
   
}

