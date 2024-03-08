# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>




int main()
{
	uint32 Val,i,pos=1;
	Node_t *Start=NULL;
	
	Start=CreateList(Start);
	DisplayList(Start);
	printf("please enter a position to a node to be inserted   \n");
    scanf("%d",&pos);	//position which we insert node
	 
	
	 Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
	 printf("please enter a value to be inserted  \n");
	 scanf("%d",&Val);
	Temp->Info=Val;
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
 	  Temp->Link=ptr->Link;
		ptr->Link=Temp;
	}
     printf("\nthe list after insertion is \n");
	DisplayList(Start);
}