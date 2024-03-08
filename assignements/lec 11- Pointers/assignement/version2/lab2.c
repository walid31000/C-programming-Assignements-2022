#include<stdio.h>
int string_length (char *str);
int main()
{
	char string[100],length;
	
	printf("enter your string ");
	//scanf("%s",string);
	gets(string);
	length=string_length(string);
	printf("the lenghth of your string=%d",length);
	
	
	
}
int string_length (char *str)
{
	int counter=0;
	while(*(str+counter)!='\0')
	{
		counter++;
	}
  	return counter;
	
}	