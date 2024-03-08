#include<stdio.h>
int string_length (char *str);
int main()
{
	char string[100],str[4],length;
	int i=0,j=0;
	printf("enter your string ");
	//scanf("%s",string);
	gets(string);
	length=string_length(string);
	
	
		 
		str[i]=string[length-1];
		
		str[i+1]=' ';
		str[i+2]=string[length-2];
		str[i+3]='\0';
	
	printf("%s",str);
	
	
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