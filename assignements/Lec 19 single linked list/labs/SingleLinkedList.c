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
 
 Node_t* Creatlist(Node_t* Start)
 
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



 
 
 