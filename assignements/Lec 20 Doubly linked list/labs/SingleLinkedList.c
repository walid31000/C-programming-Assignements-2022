# include"STD_TYPES.h"
#include<stdio.h>
#include<stdlib.h>
#include"SingleLinkedList.h"



void DisplayList(	Node_t* Start)
{
	 Node_t* ptr=Start;
	 if(Start==NULL)
	 {
		 printf("list is empty\n");
         return;
	 }
      else
      {
           while(ptr!=NULL)
                
		   {			
                printf("%d\t",ptr->Info);
				ptr=ptr->Link;
		   }	
           printf("\n");
	  }
}	

uint8 CountNodes (Node_t* Start)

{
	uint8 count=0;
	Node_t* ptr=Start;
		
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->Link;
	} 
     
     return count;
	 
}	 


sint8 SearchList(	Node_t* Start,uint32 Val)
{
	sint8 position=1;
	Node_t* ptr=Start;
	
	        while(ptr!=NULL)
	    {
		       if(ptr->Info==Val)
		   {
			   break;
		   }	
		       position++;
		     ptr=ptr->Link;
	 	
	       	
	    }
	
          if(ptr==NULL)
	  {	
         position=-1;

	   }
        return position;
	
}

 
 Node_t* InsertAtBeginning(Node_t* Start, uint32 Data)
 {   
	     /*creat the node*/
 
	 Node_t*Temp=(Node_t*)malloc(sizeof(Node_t));
	 Temp->Link=Start;
	 Temp->Info=Data;
	 Start=Temp;
	 return Start;
	 
 } 
 
 void InsetAtEnd(Node_t* Start, uint32 Data)
 {
         Node_t* ptr=Start;
		 Node_t* Temp=(Node_t*) malloc (sizeof(Node_t));
         
         while((ptr->Link)!=NULL)
           {
	            ptr=ptr->Link;
            }
          ptr->Link=Temp;
		   Temp->Info=Data;
          Temp->Link=NULL;
} 
 
 Node_t* CreatList(Node_t* Start)
 
 {
	 uint32 n,i,data; 
	 
	 printf("please enter the node's number \n");
	 scanf("%d",&n);
	 if(n==0)
	 {
		 /*do nothing*/
	 }
  
    else
	{
		printf("Enter the 1st elemnts :\n");
		scanf("%d",&data);
		
        Start=InsertAtBeginning(Start,data);
		for(i=1;i<n;i++)
		{
			printf("enter the next data element :\n");
			scanf("%d",&data);
			InsetAtEnd(Start,data);
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
           ptr=ptr->Link;
	}	   
	if(ptr==NULL)
	{
		 printf("%d is not found in the list \n",DataAfter);
	}
      else

	  {
		  Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
		  Temp->Info=NodeData;
		  Temp->Link=ptr->Link;
		  ptr->Link=Temp;
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
			 Start=InsertAtBeginning(Start,NodeData);
			
		 }
          else
		  {

               while(ptr->Link!=NULL)
			   {
                   
                    if(ptr->Link->Info==DataBefore)
                         break;
                         ptr=ptr->Link;					 
			   }
  
              if(ptr->Link==NULL)				  
			  {
                   	printf("%d is not found in the list \n",DataBefore);
			  }
               else
			   {
        			  Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
		              Temp->Info=NodeData;
		              Temp->Link=ptr->Link;
		              ptr->Link=Temp;	   

			   }
		  
		   }
	  }  
     return Start;	  
}	
Node_t* InsertAtPos(Node_t* Start,uint32 NodeData,uint8 Position)
{
	Node_t* ptr=Start;
	uint8 i;
	if(Position==1)
	{
		Start=InsertAtBeginning(Start,NodeData);
	}	
	  
	  else
	  {
		  for(i=1;(i<Position-1)&&(ptr!=NULL);i++)
		  {
	           ptr=ptr->Link;
		  } 
            if(ptr==NULL)
			{
                printf("%d position is not found in the list \n",Position);
			}	
			else
			{
				  Node_t* Temp=(Node_t*)malloc(sizeof(Node_t));
		              Temp->Info=NodeData;
		              Temp->Link=ptr->Link;
		              ptr->Link=Temp;	   

			}
	  }

    return Start;	  
}	


Node_t* DeleteNode(Node_t* Start,uint32 NodeVal)
{
	       Node_t* ptr,*Temp;
	       if(Start==NULL)
		   {
			   printf("List is empty \n");
		   }
	            else
               {
                      /*deletion of the first node or the only node  */
			        	if(Start->Info==NodeVal)
				      {
					       Temp=Start;
					       Start=Start->Link;
					       free(Temp);
				
				       }
			    		 else
						{							 
                             /*deletion in between nodes or deletion at the end */
							 ptr=Start;
    		                 while(ptr->Link!=NULL)
							 {
                                  
                                if(ptr->Link->Info==NodeVal)
                                  break;
                                 ptr=ptr->Link;
							 }
                                if(ptr->Link==NULL)
								{
                                      printf("%d is not found in the list \n",NodeVal);
								}
                               else
							   {
                                    Temp=ptr->Link;
                                     ptr->Link=Temp->Link;
									 free(Temp);
							   }									
                        }
			   }
			   
			 return Start;  
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

 
 
 