#include<stdio.h>
void remov (char data[]);
int main ()
{
	int i;
	char arr[10];
	printf("please enter your string\n");
	scanf("%10s",arr);
	remov(arr);
	printf("the string after removing  \n");
   
		printf("%s",arr);
	
}
void remov (char data[])
{	
     int i,j;
    for(j=0;data[j]!='\0';j++)
	{	
	     while ( !((data[j] >= 65 && data[j] <= 90) || (data[j] >= 97 && data[j] <= 122)) &&  (data[j] != '\0') )
		
	   {
		   for(i=j;data[i]!='\0';i++)
		   {	
			data[i]=data[i+1];
	       }	

		

	   }		
	}		
}	