#include<stdio.h>
void prime (int number);
int main(void)
{
 
 int num1,num2;
 printf("please enter 2 numbers \n");
 scanf("%d%d",&num1,&num2);
 printf ("the prime numbers in this interval are \n");
 for(int i=num1;i<=num2;i++)
 {	 
  prime (i);

 }

}


void prime (int number)
{
 int i,flag=0;
  
  
  
for(i=2;i<=number/2;i++)
{
  if(number%i==0)
   {
    flag=1;break;
	break;
    }
}
if(flag==0)
{
 printf("the number %d is prime\n",number);
}

}