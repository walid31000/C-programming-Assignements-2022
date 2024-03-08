# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>
void InsertAfterNode (Node_t* Start,uint32 DataAfter,uint32 Val);




int main()
{
	uint32 Val,i,ent;
	Node_t *Start=NULL;
	
	Start=CreateList(Start);
	DisplayList(Start);
	printf("please enter a value of a node to insert after  \n");
    scanf("%d",&Val);
	printf("please enter a value to be inserted   \n");
    scanf("%d",&ent);
	 InsertAfterNode (Start,ent,Val);
	
	 printf("\nthe list after insertion is \n");
	DisplayList(Start);
}


void InsertAfterNode (Node_t* Start,uint32 DataAfter,uint32 Val)
{
     Node_t* ptr=Start;
	   
	 
	while ((ptr!=NULL)&&((ptr->Info)!=Val))
	{
		ptr=ptr->Link;
		
	}	
	if(ptr==NULL)
	{
		printf("position not found\n");
	}

    else
		
	{
		Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
		Temp->Info=DataAfter;
		Temp->Link=ptr->Link;
		ptr->Link=Temp;
	  
	} 
    
}
       











	