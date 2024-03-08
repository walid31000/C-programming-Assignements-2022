#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H


#define Array_Size    5


void Init(void);
uint8 IsEmpty(void);
uint8 IsFull(void);
uint8 GetSize(void);
void Insert(uint32 Val);
uint32 Delete(void);
uint32 Peek(void);

void Display(void);









#endif