#include<stdio.h>
float operation(char op,int op1,int op2);
int op1,op2;
float result=0;
char op;	
int main ()
{

printf("please enter the two operands \n");
scanf ("%d%d",&op1,&op2);
printf("please enter the operation type \n");
scanf(" %c",&op);
result=operation(op,op1,op2);
printf("the result=%f",result);
	
}


float operation(char op,int op1,int op2)
{

switch (op)
{

case '+':return op1+op2;break;
case '-' :return op1-op2; break;
case '*':return op1*op2; break;
case '/':return(float) op1/(float)op2;break;
default: printf("invalid input");break;

}

}	