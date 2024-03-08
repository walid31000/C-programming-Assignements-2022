# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>


Node_t* InsertBeforNode (Node_t* Start,uint32 DataBefor,uint32 Val);

int main()
{
uint32 Val,i,ent;
	Node_t *Start=NULL;
	
	Start=CreateList(Start);
	DisplayList(Start);
	printf("please enter a value of a node to insert befor  \n");
    scanf("%d",&Val);
	printf("please enter a value to be inserted   \n");
    scanf("%d",&ent);
	 InsertBeforNode (Start,ent,Val);




  printf("\nthe list after insertion is \n");
	DisplayList(Start);


}

Node_t* InsertBeforNode (Node_t* Start,uint32 DataBefor,uint32 Val)
{
	 Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
	
	
	 Node_t* ptr=Start;
	   
	 
	while (((ptr->Link)!=NULL)&&((ptr->Link)->Info!=Val))
	{
		ptr=ptr->Link;
		
	}	
	if(ptr->Link==NULL)
	{
		printf("position not found\n");
	}

    else
    {
		Temp->Info=DataBefor;
 	    Temp->Link=ptr->Link;
		ptr->Link=Temp;
	}
   return Start;
}
	
	
	
	
	
	
	
	
	
	
	
	



