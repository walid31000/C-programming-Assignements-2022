#include<stdio.h>
void convert (char data[],int size);
int main ()
{
	int i;
	char arr[10];
	printf("please enter your string\n");
	scanf("%10s",arr);
	printf("your string is %10s\n",arr);
	convert(arr,10);
	printf("the string after convertion is \n");
	 for(i=0;i<10;i++)
		  printf("%c",arr[i]);
	
}
	
	
void convert (char data[],int size)
{

int i,j;
     for(i=0;i<size;i++)
	 {
		 if(('Z'>=data[i])&&(data[i]>='A'))
			 data[i]=data[i]+32;
	 }
	 
}	