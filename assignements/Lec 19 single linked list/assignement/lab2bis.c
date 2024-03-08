# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>




int main()
{
	uint32 Val,i,ent;
	Node_t *Start=NULL;
	
	Start=CreateList(Start);
	DisplayList(Start);
	printf("please enter a value of a node to insert a value before  \n");
    scanf("%d",&ent);	//position which we insert before
	 
	
	 Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
	 printf("please enter a value to be inserted  \n");
	 scanf("%d",&Val);
	Temp->Info=Val;
	 Node_t* ptr=Start;
	   
	 
	while (((ptr->Link)!=NULL)&&((ptr->Link)->Info!=ent))
	{
		ptr=ptr->Link;
		
	}	
	if(ptr->Link==NULL)
	{
		printf("position not found\n");
	}

    else
    {
 	  Temp->Link=ptr->Link;
		ptr->Link=Temp;
	}
     printf("\nthe list after insertion is \n");
	DisplayList(Start);
}