#include<stdio.h>
int main ()
{
	
	float total_value;
	struct employee
	{
		float salary;
		float bonus;
		float deduction;
	};
	struct employee Ahmed,walid,Amr;
	printf("enter Ahmed salary : \n");
	scanf("%f",&Ahmed.salary);
	printf("enter Ahmed bonus : \n");
	scanf("%f",&Ahmed.bonus);
	printf("enter Ahmed deduction : \n");
	scanf("%f",&Ahmed.deduction);
	
	printf("enter walid salary : \n");
	scanf("%f",&walid.salary);
	printf("enter walid bonus : \n");
	scanf("%f",&walid.bonus);
	printf("enter walid deduction : \n");
	scanf("%f",&walid.deduction);
	
	printf("enter Amr salary : \n");
	scanf("%f",&Amr.salary);
	printf("enter Amr bonus : \n");
	scanf("%f",&Amr.bonus);
	printf("enter Amr deduction : \n");
	scanf("%f",&Amr.deduction);
	
	total_value=(Ahmed.salary+Ahmed.bonus+walid.salary+walid.bonus+Amr.salary+Amr.bonus)-(Ahmed.deduction+walid.deduction+Amr.deduction);
	printf("total value needed =%.2f ",total_value);
	
	
}