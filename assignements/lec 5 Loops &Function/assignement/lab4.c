#include<stdio.h>


int count_hole(int x);
int main ()

{
	int num,result;
	printf("please enter the value of num  ");
	scanf("%d",&num);
	result=count_hole(num);
	printf("the number %d has %d holes",num,result);
	
	
}	


int count_hole(int x)
{
	int var=0,hole=0;
	do
	{
	var=x%10;
	x=x/10;
	switch (var)
	   {
        default:hole=hole+0;break;
		case (0):hole=hole+1;break;
		case (4):hole=hole+1;break;
		case (6):hole=hole+1;break;
		case (9):hole=hole+1;break;
        case (8):hole=hole+2;break;
	   }
	
	
	}while(x!=0);
	
	return hole;
	
	
	
	
	
}	