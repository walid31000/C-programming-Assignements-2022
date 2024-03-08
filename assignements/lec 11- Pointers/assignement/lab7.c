#include<stdio.h>

int main ()
{
	int i=0;
	char str[100];
	printf("please enter your string \n");
	scanf("%s",&str);
	char *ptr=str;
	while (*(str+i)!='\0')
	{
		i++;
		
	}	
	*ptr--;
	printf("%c",*(ptr+i));
	*ptr--;
	printf(" %c ",*(ptr+i));
	
	
}



	