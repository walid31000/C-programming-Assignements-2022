# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>




int main()
{
	uint32 Val,i,ent,pos=1;
	Node_t *Start=NULL;
	
	Start=CreateList(Start);
	DisplayList(Start);
	printf("please enter a value of a node to insert after  \n");
    scanf("%d",&ent);	
	 
	
	 Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
	 printf("please enter a value to be inserted  \n");
	 scanf("%d",&Val);
	Temp->Info=Val;
	 Node_t* ptr=Start;
	   
	 
	while ((ptr!=NULL)&&((ptr->Info)!=ent))
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
       