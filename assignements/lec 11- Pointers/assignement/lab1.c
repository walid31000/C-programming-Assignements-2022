#include<stdio.h>
int cal (int *ptr,int size);
int main ()
{
int i,var;
int arr[100];

printf("please enter your array size \n");
scanf("%d",&var);
printf("please enter your array's elements  \n");
for(i=0;i<var;i++)
	scanf("%d",&arr[i]);
int result=cal(arr,var);
printf("the summution of the elements array= %d",result);


}	

int cal (int *ptr,int size)
{
int i;
int sum=0;
    for(i=0;i<size;i++)
       {
	      sum=sum+*(ptr+i);
	   }
	return sum;
}
