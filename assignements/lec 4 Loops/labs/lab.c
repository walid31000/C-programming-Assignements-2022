#include<stdio.h>
int main(void)
{
  int number,i=1,fact=1;
  printf("please enter to display its factorial  ");
   scanf("%d",&number);
 
	 
do {
	fact=fact*i;
	i++;
	
  } while(i<=number); 
  printf("factorial= %d",fact );
}