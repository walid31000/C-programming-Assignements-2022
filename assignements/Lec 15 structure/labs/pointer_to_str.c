//testing passing pointer to struct
#include<stdio.h>

typedef struct 
	{
		int salary;
		int bonus;
		int deduction;
	}employee;
	
void ptr_to_str( employee *obj);		
int main ()
{
	employee Ahmed={1000,2000,500};
	 ptr_to_str(&Ahmed);
	printf("ahmed salary=%d  ahmed bonus=%d   ahmed deduction =%d  ",Ahmed.salary,Ahmed.bonus,Ahmed.deduction);
	
}	

void ptr_to_str(employee *obj)
{
	
	obj->salary=4000;
	obj->bonus=400;
	obj->deduction=7;
}