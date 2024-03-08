#include<stdio.h>
void add_matrix(int arr1[][3],int  arr2[][3],int sum[][3]);
int main ()
{
	int i,j;
	int arr1[3][3];
	int arr2[3][3];
	int sum[3][3];
	
	printf("please enter the first matrix elements \n");
     for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 { 
	        printf("please enter the row %d and colomn %d    ",i,j);	
            scanf("%d",&arr1[i][j]);
		 }
	 }	 
	
	printf("please enter the second matrix elements \n");
     for(i=0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 { 
	        printf("please enter the row %d and colomn %d   ",i,j);	
            scanf("%d",&arr2[i][j]	);
		 }
	 }	
	
	add_matrix(arr1,arr2,sum);
	printf("the result of sum \n");
	for(i=0;i<3;i++)
	{
		{
		for(j=0;j<3;j++)
			printf("%d	\t",sum[i][j]);
	   }
	   printf("\n");
	}  
	
	
	
}
void add_matrix(int arr1[][3],int  arr2[][3],int sum[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		{
		   for(j=0;j<3;j++)
		
	      sum[i][j]=arr1[i][j]+arr2[i][j];
	    }
    }	
 
} 