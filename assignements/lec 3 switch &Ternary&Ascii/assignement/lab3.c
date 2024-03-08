#include<stdio.h>
int main(void)
{
int x,y;
printf("please enter the value of x and y\n");
scanf("%d%d",&x,&y);
if(x%y==0)
printf("%d is multiple of %d",x,y);
else
printf("%d is not multiple of %d",x,y);
}	