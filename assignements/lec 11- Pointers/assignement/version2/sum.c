#include<stdio.h>
int sumution(int *ptr,int size);
int main ()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int result=sumution(arr,10);
  printf("the summution of this array =%d",result);
	
}
int sumution(int *ptr,int size)
{
  int i,sum=0;
  for(i=0;i<size;i++)
  {
	  sum+=*(ptr+i);
  }
   return sum;
}	