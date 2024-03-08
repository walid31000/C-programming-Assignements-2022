#include<stdio.h>
int length (char data[]);
int main ()
{
	int i;
	char arr[1000];
	printf("please enter your string\n");
	scanf("%s",arr);
	int result=length(arr);
	printf("the length of this string =%d",result);
}


int length (char data[])
{
	int i=0;
 
 
	while (data[i]!='\0')
	{	
   
	i++;
		
 
     } 
	 return i;
}	 