#include<stdio.h>
#include"STD_TYPES.h"
void bubble_sort(uint32 Arr[],uint8 size);


int main()
{
	uint8 i;
	uint32 array[6]={45,23,59,66,38,12};
	bubble_sort(array,6);
	for(i=0;i<6;i++)
		printf("%d\t",array[i]);
	
	
}

void bubble_sort(uint32 Arr[],uint8 size)
   {
	   uint8 i,j,flag;
	   uint32 temp;
	   
	   for(i=0;i<size-1;i++)
     	  {
		        flag=0;
                for(j=0;j<size-1-i;j++)
				  {		
                        if(Arr[j]>Arr[j+1])
						{
                            temp=Arr[j];
                            Arr[j]=Arr[j+1];
                            Arr[j+1]=temp;
							flag=1;
                        }							
				  }
				  if(flag==0)
				    { 
					   break;
				    }  
		   } 				  
   }	  