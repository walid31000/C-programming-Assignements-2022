#include<stdio.h>
int checkpower3(int x);
int main()
{
	int num;
	printf("enter a number \n");
	scanf("%d",&num);
	
	if( checkpower3(num))
	{
		printf("%d is poewer of 3",num);
	}
   else
	{
		printf("%d is not poewer of 3",num);
	} 

}	
int checkpower3(int x)
{
	//keep dividing the number by 3 until it becomes 1
	while(x%3==0)
	{
		x/=3;
	}
	// If the final value is 1, then it's a power of 3
	return x==1;
	
}	