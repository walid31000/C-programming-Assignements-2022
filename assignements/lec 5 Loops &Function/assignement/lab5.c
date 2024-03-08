#include<stdio.h>
int checkPowerofThree(int x);
int checkPowerofTwo(int x);
int main ()

{
	int num,result;
	printf("please enter the value of num  ");
	scanf("%d",&num);
if (checkPowerofTwo(num) == 1)
      printf("the number %d is a power of 2\n", num);
   else
      printf("the number %d is not a power of 2\n", num);
   result=checkPowerofThree(num);
    if(result==1)
		printf("the number %d is power of 3 \n",num);
	else	
	printf("the number %d is not power of 3 \n",num);

	
	
}
int checkPowerofTwo(int x)
{
   //checks whether a number is zero or not
   if (x == 0)
     
         return -1;

         //true till x is not equal to 1
        while( x != 1)
      { 
          //checks whether a number is divisible by 2
         if(x % 2 != 0)
         return -1;
         x /= 2;
       }
     return 1;
   
  
}  
 

int checkPowerofThree(int x)
{
   //checks whether a number is zero or not
   if (x == 0)
     
         return 0;

         //true till x is not equal to 1
        while( x != 1)
      { 
          //checks whether a number is divisible by 2
         if(x % 3 != 0)
         return 0;
         x /= 3;
       }
     return 1;
   

} 



