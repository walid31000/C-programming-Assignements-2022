#include<stdio.h>
int count (int num);
int main ()
{
   int input,result;
   printf("enter a number ");
   scanf("%d",&input);
   result=count(input);
   printf("%d contain %d ones",input,result);
	
	
	
}
int count (int num)
{
	int i,res,counter=0;
  for(i=0;i<=31;i++)
  {
    res=((num>>i)&1);
    if(res==1)
    counter++;	
  }
  return counter;
}