//testing passing structto function
#include<stdio.h>

typedef struct 
	{
		float salary;
		float bonus;
		float deduction;
	}employee;
	
int calculat_total(employee obj);		
int main ()
{
	float value;
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
	value=calculat_total(ahmed)+calculat_total(amr)+calculat_total(walid);
	printf("the value nedded is %f",value);
}
int calculat_total(employee obj)
{

return obj.salary+obj.bonus-obj.deduction;



}	