#include<stdio.h>
int smallest (int *ptr,int size);
int main ()
{
int i,result;
int arr[10];

printf("please enter your array's elements  \n");
for(i=0;i<10;i++)
	scanf("%d",&arr[i]);

result=smallest (arr,10);
printf("the smallest is %d \n",result);


}
int smallest (int *ptr,int size)
{
   int i,small;
   
   for(i=1;i<=9;i++)
   {
     if(*(ptr+i)<*(ptr))
	 {
	 small=*(ptr+i);
	 	 
	 }	 
   }	 
	return small;
	
}	