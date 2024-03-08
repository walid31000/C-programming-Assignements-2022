#include<stdio.h>
#include"STD_TYPES.h"
void insert_sort(uint32 Arr[],uint32 size);


int main()
{
	typedef union 
	{
		uint8 first_name[30];
		uint8 last_name [30];
	}family_name;
	family_name u;
printf("enter the first name \n");

scanf("%s",&u.first_name);	
printf("the last name is  %s\n",u.last_name);
printf("the size of this union is %d",sizeof(u));
}