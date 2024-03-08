#include<stdio.h>
int count_holes (int num);

int main ()
{
	int number,holes;
	printf("please enter a number \n");
	scanf("%d",&number);
	holes=count_holes (number);
	printf("%d contain %d holes ",number,holes);
	
}
int count_holes (int num)
{
   int sum=0;
  while(num)
  {
	int digit=num%10;
	  switch(digit)
	  {
		  case 0:
		  case 4:
		  case 6:
		  case 9:sum=sum+1;break;
		  case 8:sum=sum+2;break;
		  
	  }
      num=num/10;
	
  }	  

  
   return sum;


}	