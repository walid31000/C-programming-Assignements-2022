#include<stdio.h>
#include"STD_TYPES.h"
void insert_sort(uint32 Arr[],uint32 size);


int main()
{
	uint32 i;
	uint32 array[8];//={45,23,32,10,30,12,66,28};
	printf("please enter your element's array \n");
		for(i=0;i<8;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the array after sorting is \n");
	insert_sort(array,8);
	
	for(i=0;i<8;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}

void insert_sort(uint32 Arr[],uint32 size)
{
	
	uint32 i,j;
	uint32 temp;
	for(i=1;i<size;i++)
		
		{
			temp=Arr[i];
			j=i-1;
			while (j>=0 && Arr[j]>temp)
			{
				
				
				
					Arr[j+1]=Arr[j];
	               j--;
					
	             
            }	
	         Arr[j+1]=temp;
	    }

}		
	
	
	
	
	
	
	
	
	