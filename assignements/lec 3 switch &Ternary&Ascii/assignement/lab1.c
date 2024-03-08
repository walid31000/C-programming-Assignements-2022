#include<stdio.h>
int main(void)
{
char x;
printf("please enter a character\n");
scanf("%c",&x);
if((x>='A')&&(x<='Z')||(x>='a')&&(x<='z'))
printf("you enter an alphabet %c",x);
else
printf("the charachter entered is not an alphabet");
}	
	
	