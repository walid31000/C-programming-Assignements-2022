#include<stdio.h>
int main(void)
{
 char x;
printf("please enter a character lowercase : \n");
scanf("%c",&x);
if((x<'a')||(x>'z'))
{
	printf("invalid input \n");
}
else
{
printf("the uppercase of this character is %c",x-32);
}
}