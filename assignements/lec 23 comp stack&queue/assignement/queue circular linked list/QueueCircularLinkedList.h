#ifndef QUEUECIRCULARLINKEDLIST_H
#define QUEUECIRCULARLINKEDLIST_H

typedef struct node
{
	uint32 Info;
	struct node* Link;
}Node_t;


void Init(void);
uint8 IsEmpty(void);

uint8 GetSize(void);
void Insert(uint32 Val);
uint32 Delete(void);
uint32 Peek(void);

void Display(void);









#endif