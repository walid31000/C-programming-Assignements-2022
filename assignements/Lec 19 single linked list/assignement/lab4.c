# include"STD_TYPES.h"
#include"SingleLinkedList.h"
#include<stdio.h>
#include<stdlib.h>


Node_t* DeleteNode (Node_t* Start,uint32 Val);

int main() 
{
uint32 Val;
    Node_t *Start=NULL;
    Start=CreateList(Start);
	DisplayList(Start);
	printf("please enter a value of a node to be deleted  \n");
    scanf("%d",&Val);
	
Start= DeleteNode(Start,Val);




  printf("\nthe list after deletion is \n");
	DisplayList(Start);


}
Node_t* DeleteNode (Node_t* Start,uint32 Val)
{
	Node_t* Temp;
	Node_t* ptr=Start;
	
	//case of delition of the first node or the only node
	if(Start->Link==NULL||Start->Info==Val)
	{
		Temp=Start;
		Start=Start->Link;
		free(Temp);
		
	}
	else
  {	
	//case of delition node in between or at the end
	
	    while((ptr->Link!=NULL)&&(ptr->Link->Info!=Val))
	  {
		ptr=ptr->Link;
	  }
		if(ptr->Link==NULL)
		 {
			 printf("%d is not found in the list ",Val);
		 }
	   
	      else
	      {
      
		 
               Temp=ptr->Link;
               ptr->Link=Temp->Link;
               free(Temp);
		 
		 
         
		   }	
	  
    }   
	return Start;
}	