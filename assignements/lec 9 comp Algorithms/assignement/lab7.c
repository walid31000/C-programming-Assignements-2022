#include<stdio.h>
void revers_string (char data[],int size);
int length (char data[]);
int main ()
{
	int i;
	char arr[100];
	printf("please enter your string\n");
	scanf("%s",arr);
	printf("your string is %s \n",arr);
	int size=length(arr);
	printf("your string size=%d \n",size);
	 revers_string (arr,size);
	 printf("string after reverse is %s  \n ",arr);
	
}


//function to reverse string
void revers_string (char arr1[],int size)
{
int i,temp;
     for(i=0;i<=(size-1)/2;i++)
        {
			  temp=arr1[i];
	         arr1[i]=arr1[(size-1)-i];
	         arr1[(size-1)-i]=temp;
	
	
	
         }

}
//function to get string size
int length (char data[])
{
	int i=0;
 
 
	while (data[i]!='\0')
	{	
   
	i++;
		
 
     } 
	 return i;
}		