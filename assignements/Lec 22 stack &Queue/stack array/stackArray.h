#ifndef STACKARRAY_H
#define  STACKARRAY_H


#define STACK_SIZE    5

void Init(void);
uint8 IsEmpty(void);
uint8 IsFull(void);
uint8 GetSize(void);
uint8 IsEmpty(void);
uint32 Peek(void);
void Push(uint32 Val);
uint32 Pop(void);
void Display(void);


#endif