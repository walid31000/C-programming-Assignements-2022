#include<stdio.h>
int get(int a);
int main ()
{
	int x,res;
	scanf("%d",&x);
	res=get(x);
printf("%d",res);	

}
int get(int a)
{
	int result;
	result=(a>>3)&1;
	return result;
}	