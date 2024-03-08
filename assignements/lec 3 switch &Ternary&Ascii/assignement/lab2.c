#include<stdio.h>
int main(void)
{
	//program to transform any lower case character into upper case
char x;
printf("please enter a character lowercase\n");
scanf("%c",&x);
if((x<'a')||(x>'z'))
{
printf("invalid input");
}
else
{	

printf("the upper case of the character entered is %c",x-32);
}
}