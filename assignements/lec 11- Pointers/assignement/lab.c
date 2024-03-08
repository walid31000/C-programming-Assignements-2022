#include <stdio.h>
int sum (char* ptr);




void main()
{
	int count;
	char *str;
printf(" enter your string \n");	
scanf("%s",str);//we cant use scanf with characheter pointer
count=sum(str);
printf("the lengnt of the string is %d",count);	
	
}
int sum (char *ptr)
{
 int num=0;	
 while(*ptr!='\0')
 {
	 
    num++;	 
    ptr++;
 }
 return num;
 
} 