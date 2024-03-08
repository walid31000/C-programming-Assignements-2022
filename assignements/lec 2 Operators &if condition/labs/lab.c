#include<stdio.h>
int main ()
{
	int hours,salary;
	printf("please enter your working hours");
	scanf("%d",&hours);
	salary=hours*50;
	
	if(hours<40)
	{
		salary=salary*0.9;
	}
	printf("your salary is %d",salary);
}