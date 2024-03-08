#include<stdio.h>
void add_max(int a[3][3],int b[3][3],int row,int col);
int arr3[3][3];
int main()
{
	int arr1[3][3]={{1,2,3} ,{4,5,6},{7,8,9}};
	int arr2[3][3]={{9,8,7} ,{6,5,4},{3,2,1}};
	int i,j;
	add_max(arr1,arr2,3,3);
	
	
	
}

void add_max(int a[3][3],int b[3][3],int row,int col)
{
	int i,j;
	//int res[3][3];
	for(i=0;i<3;i++)
		
	{
	   for(j=0;j<3;j++)
		{
	      arr3[i][j]=a[i][j]+b[i][j];
	
		}	
	}

   for(i=0;i<3;i++)
		
	{
	   for(j=0;j<3;j++)
		{
	      printf("%d \t",arr3[i][j]);
	
		}	
		printf("\n");
	}	
	
	
}