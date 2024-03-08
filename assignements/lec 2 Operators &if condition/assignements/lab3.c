#include<stdio.h>
int main(void)
{
int num,bit_num,result;

printf("please enter a number\n");
scanf("%d",&num);
printf("please enter a bit number \n");
scanf("%d",&bit_num);
result=(num>>bit_num)&1;
printf("the value of this bit in this number is %d",result);
}