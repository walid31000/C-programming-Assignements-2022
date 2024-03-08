#include "STD_TYPES.h"
#include "QueueLinkedList.h"
#include <stdlib.h>

#include <stdio.h>




int main()
{
	uint8 i;
	uint32 Insertval;
	Init();
	for(i=0;i<5;i++)
	{
		printf("please enter a value to insert in queue \n");
		scanf("%d",&Insertval);
		 Insert(Insertval);
	}
	printf("the queue is \n");
	Display();
	for(i=0;i<3;i++)
	{
		printf("\nthe deleted value from the queue is  %d \n", Delete());
		
	}
	printf("the queue after deletion is \n");
	Display();
	printf("the peek of the queue is %d",Peek());
	printf("the size of the queue is %d",GetSize());
}	
	