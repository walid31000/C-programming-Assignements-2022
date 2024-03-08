#include "STD_TYPES.h"
#include <stdlib.h>
#include <stdio.h>
#include "QueueCircularLinkedList.h"


int main()
{
	uint32 insertval;
	uint8 i;
	Init();
	for(i=0;i<5;i++)
	{
		printf("please enter a value to insert in queue \n");
		scanf("%d",&insertval);
		 Insert(insertval);
	}
	printf("the queue is \n");
	Display();
	for(i=0;i<3;i++)
	{
		printf("\nthe deleted value from the queue is  %d \n", Delete());
		
	}
	printf("\nthe queue after deletion is \n");
	Display();
	printf("\nthe peek of the queue is %d\n",Peek());
	printf("\nthe size of the queue is %d",GetSize());
}	
	