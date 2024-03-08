#include<stdio.h>
	
int main ()
{
	int i,k,p,rows,j;
	printf("enter rows numbers\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		
		for(k=1;k<=(2*rows)-(2*i);k++)
		{
          printf(" ");
		}
		for(p=i;p>=1;p--)
		{
			printf("%d",p);
			
		}	
		
		printf("\n");
	}	
	
}	