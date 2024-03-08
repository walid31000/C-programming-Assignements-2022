//pointer to struct
#include<stdio.h>
	
int main ()
{
	typedef struct
	{
		int salary;
		int bon;
		int ded;
	}employee;
	
	employee walid,ahmed;
	
	employee *ptr=&walid;
	employee *ptr1=&ahmed;
	ptr1->bon=6000;
	//(*ptr).salary=500;
	ptr->salary=800;
	printf("%d\n",walid.salary);
	printf("%d",ahmed.bon);
}