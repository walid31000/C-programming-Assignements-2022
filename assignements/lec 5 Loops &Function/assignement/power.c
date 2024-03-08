#include<stdio.h>
int checkpower2 (int x);
int checkpower3 (int x);
int checkpower (int x);
int main ()
{
	
  int check_num,num;
  printf("please enter a number to check \n");
  scanf("%d",&num);
  check_num=checkpower(num);
  if(check_num==1)
  {
	  printf("%d is power of 2",num);
  }
  else if(check_num==0)
  {	  

    printf("%d is power of 3",num);
  }
   else 
   {
	   printf("%d is not power of 2 nor power of 3",num);
   }
   
}  



int checkpower2 (int x)
{
	
	return (x&(x-1))==0;
}	

int checkpower3 (int x)
{
  
  while(x%3==0)
  {
    x/=3;
  }
   return x==1;
}   
int checkpower (int x)
{
  
  if(checkpower2(x))
	  return 1;
  else if(checkpower3(x))
	  return 0;
  else
	  return -1;
} 

	
  
  