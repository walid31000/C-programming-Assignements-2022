#include<stdio.h>
void concatenate(char arr1[],char arr2[]);
int main ()
{
char data1[100];	
char data2[100];
printf("please enter the first string\n");
scanf("%s",data1);	
printf("please enter the second string\n");
scanf("%s",data2);
printf("the two strings concatenated is \n");	
concatenate(data1,data2);

}
void concatenate(char arr1[],char arr2[])
{
  int i=0,j=0;
  char arr3[100];//create a third string to concatenate
 while(arr1[i]!='\0')  
   { 
      arr3[j]=arr1[i];//put string1 into string 3
	  i++;
	  j++;
   }  
	  i=0;
	  while(arr2[i]!='\0')
   { 
      arr3[j]=arr2[i];//put string 2 into string 3
	  i++;
	  j++;
   }
   arr3[j]='\0';
   printf("%s",arr3);
   
}		  
		  