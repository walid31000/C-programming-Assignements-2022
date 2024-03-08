//fuction to reverse a string using pointers

#include<stdio.h>
#include<string.h>
void reverse (char *string);

int main ()
{
	
	char str[]="walido";
	reverse(str);
	printf("%s",str);
	
}
void reverse (char *string)
{
	char i=0,j,temp;
	char str[20];
	char *start=string;
	char *end=start;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
	 
	 temp=*(end);
	 *(end)=*(start);
	 *(start)=temp;
	 start++;
     end--;	 
		
	}
	
	
}