#include<stdio.h>
int main(void)
{
int num,bit_num,result;

printf("please enter a number\n");
scanf("%d",&num);
printf("please enter a bit number \n");
scanf("%d",&bit_num);
result=((num)^(1<<bit_num));
printf("the result after toggling the bit is %d",result);
}