#include<stdio.h>
int main(void)
{
int temp;
printf("please enter the water temperature\n");
scanf("%d",&temp);
if ((temp>100)||(temp<0))
printf("invalid input");
else if (temp<=30)
printf("heating required is 7min");
else if (temp<=60)
printf("heating required is 5min");	
else if (temp<=90)
printf("heating required is 3min");	
else 
printf("heating required is 1min");
}