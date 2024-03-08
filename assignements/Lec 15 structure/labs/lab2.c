#include<stdio.h>
	
int main ()
{
	float value;
	typedef struct 
	{
		float salary;
		float bonus;
		float deduction;
	}employee;
	 employee ahmed,amr,walid;
	printf("please enter ahmed salary \n");
	scanf("%f",&ahmed.salary);
	printf("please enter ahmed bonus \n");
	scanf("%f",&ahmed.bonus);
	printf("please enter ahmed deduction \n");
	scanf("%f",&ahmed.deduction);
	
	//sruct employee amr;
	printf("please enter amr salary \n");
	scanf("%f",&amr.salary);
	printf("please enter amr bonus \n");
	scanf("%f",&amr.bonus);
	printf("please enter amr deduction \n");
	scanf("%f",&amr.deduction);
	
	//sruct employee walid;
	printf("please enter walid salary \n");
	scanf("%f",&walid.salary);
	printf("please enter walidbonus \n");
	scanf("%f",&walid.bonus);
	printf("please enter walid deduction \n");
	scanf("%f",&walid.deduction);
	 value=(ahmed.salary+amr.salary+walid.salary+ahmed.bonus+amr.bonus+walid.bonus)-(ahmed.deduction+amr.deduction+walid.deduction);
	printf("the value nedded is %f",value);
}	