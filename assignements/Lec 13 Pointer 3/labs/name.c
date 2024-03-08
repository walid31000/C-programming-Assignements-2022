#include<stdio.h>


int main()
{
	char *name[4]={"Ahmed","Gamel","Mohamed","Emad" };
	char letter,i;
	printf("enter your 1st letter of your name \n");
	scanf("%c",&letter);
	for(i=0;i<4;i++)
	{
		if(*(*(name+i))==letter)
		{
			printf("welcome %s",*(name+i));
		    break;
		}
	}
	if(i==4)
	   {
		printf("invalid input ");
	   }
}