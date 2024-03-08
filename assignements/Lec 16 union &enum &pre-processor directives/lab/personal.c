//personal data using enum
#include<stdio.h>

typedef enum 
	{
		Male,
		Female
	}gender;
	
	typedef struct 
	{
		char name[100];
	   gender s_gender;
	}person;
	
int main()
{
	int i;
	 person Spersons[]={{"Mohamed Ahmed",Male},{"Amina karima",Female}};
	
	for (i=0;i<sizeof(Spersons)/sizeof( person);i++)
	{
		printf("%s -%s\n",Spersons[i].name,(Spersons[i].s_gender==Male )?"Male":"Female");
	}
	
}