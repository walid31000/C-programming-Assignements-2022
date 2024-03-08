//)take a number and a bit number from the user , set this bit (make it 1), print the result
#include <stdio.h>
int main()
{
	int number,bit_num,result;
	printf("please enter a number \n");
	scanf("%d",&number);
	printf("please enter a bit number \n");
	scanf("%d",&bit_num);
	result=number|(1<<bit_num);
	printf("the number after setting is %d",result);
	return 0;
}
	