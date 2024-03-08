#include "STD_TYPES.h"
#include "DoublyLinkedList.h"
#include <stdlib.h>
#include <stdio.h>



void DisplayList(Node_t* Start)
{
	Node_t* ptr = Start;
	if(Start == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->Info);
			ptr= ptr->Next;
		}
		printf("\n");
	}
}


Node_t* InsertInEmpty(Node_t* Start,uint32 Data)
{
	Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
	Temp->Info=Data;
	Temp->Next=NULL;
	Temp->Prev=NULL;
	Start=Temp;
	return Start;
}	


Node_t* InsertAtBegining(Node_t* Start,uint32 Data)
{
	
	Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
	
	
	Temp->Info=Data;
	
	Temp->Prev=NULL;
	Temp->Next=Start;
	Start->Prev=Temp;
	Start=Temp;
	return Start;
}
	
void InsertAtEnd(Node_t* Start,uint32 Data)

{   
   	Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
	Node_t* ptr = Start;
	while(ptr->Next!=NULL)
	{
		ptr=ptr->Next;
	}
     
	 Temp->Info=Data;
     Temp->Next=NULL;
	 Temp->Prev=ptr;
	 
	 ptr->Next=Temp;
	 
}	 



   
Node_t* CreatList(Node_t* Start)
{
	uint32 i, n, data;
	printf("Enter Number of nodes: ");
	scanf("%d",&n);
	
	if(n==0)
	{
		/*Do nothing*/
	}
	
	else
	{
		printf("Enter the 1st element: ");
		scanf("%d",&data);
		Start= InsertInEmpty(Start,data);
		
		for(i=1;i<n;i++)
		{
			printf("enter the next data element: ");
			scanf("%d",&data);
			InsertAtEnd(Start,data);
		}
	}
	
	return Start;
}	
	
void InsertAfter(Node_t* Start,uint32 NodeData,uint32 DataAfter)
{
	Node_t* ptr=Start;
	while(ptr!=NULL)
	{
         if(ptr->Info==DataAfter)
           break;
           ptr=ptr->Next;
	}	   
	if(ptr==NULL)
	{
		 printf("%d is not found in the list \n",DataAfter);
	}
      else

	  {
		  Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
		
		  Temp->Info=NodeData;
		  
		 Temp->Prev=ptr;
		  Temp->Next=ptr->Next;
		  if(ptr->Next!=NULL)
		   {
		       ptr->Next->Prev=Temp;
		   }   
		  ptr->Next=Temp;
	  }  
	
	
	
}	
Node_t* InsertBefore(Node_t* Start,uint32 NodeData,uint32 DataBefore)
{
    
	if(Start==NULL)
	{
		printf("List is empty \n");
		
	}
   	
	 else
	{
		 Node_t* ptr=Start;
		 if(Start->Info==DataBefore)
		 {
			 Start=InsertAtBegining(Start,NodeData);
			
		 }
          else
		  {

               while(ptr!=NULL)
			   {
                   
                    if(ptr->Info==DataBefore)
                         break;
                         ptr=ptr->Next;					 
			   }
  
              if(ptr==NULL)				  
			  {
                   	printf("%d is not found in the list \n",DataBefore);
			  }
               else
			   {
        			  Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
		              Temp->Info=NodeData;
		              Temp->Next=ptr;
		              ptr->Prev=ptr->Prev;
                      ptr->Prev->Next=Temp;
                      ptr->Prev=Temp;					  

			   }
		  
		   }
	  }  
     return Start;	  
}	


 Node_t* DeleteNode(Node_t* Start,uint32 Val)
 {
	
	Node_t* ptr=Start;
	
		if(Start==NULL)
	{
		printf("List is empty \n");
		
	}
  
	     //case of deletion of the only node 
	    else if((Start->Next==NULL)&&(Start->Info==Val))
      {
		  //case of deletion of the only node 
		
		Node_t* Temp=Start;
		Start=NULL;
		free(Temp);
		
	   }
	   else if (Start->Info==Val)
          {	   //case of deletion of the first node 
      
		 
             Node_t* Temp=Start;
			  Start=Start->Next;
			  Start->Prev=NULL;
			  free(Temp);
		   }  
 
	     //case of deletion last node or in between 
	
	    else 
	  {
		  
		   Node_t* Temp=Start->Next;
		   while(Temp->Next!=NULL)
		   {
			   
	             if(Temp->Info==Val)
				 {
					 break;
				 } 
                   Temp=Temp->Next;
		   }
            if(Temp->Next!=NULL)
			{

	         /*delete in between*/
			 Temp->Prev->Next=Temp->Next;
			 Temp->Next->Prev=Temp->Prev;
			 free(Temp);
			} 
			else
			{  
		        /*Temp is now pointing to last node*/
				
				if(Temp->Info==Val)
				{
					/*deletion of last node*/
					Temp->Prev->Next=NULL;
					free(Temp);
					
					
				}
                 else
				 {
                     /*value not found in the list*/
					 printf("%d is not found in the list \n",Val);
				 }
			}
	  }
    return Start;	  
}	 
	 


	
	
	
	
	
	
	
	
	
	
	
	