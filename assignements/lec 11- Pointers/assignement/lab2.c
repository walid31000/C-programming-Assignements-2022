#include<stdio.h>
int string_length (char *ptr);
int main ()
{
int i;
char arr[100];
printf("enter your string \n");
scanf("%s",arr);
int result=string_length(arr);
printf("the lenghth of your string is %d ",result);



}

int string_length (char *ptr)
{
	int i=0;

        while (*(ptr+i)!='\0')
		{
           i++;			
        }
		return i;
}
