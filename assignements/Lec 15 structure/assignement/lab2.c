#include<stdio.h>
# include"STD_TYPES.h"

typedef struct
	{
		f32 real;
		f32 image;
	}cmplex; 
	cmplex num1,num2,addcom,result,n1,n2;
	 cmplex  add(cmplex n1,cmplex n2);
int main ()
{
	
	
	printf("please enter the real part of your num1\n");
	scanf("%f",&num1.real);
	printf("please enter the imaginary part of your num1\n");
	scanf("%f",&num1.image);
	
	printf("please enter the real part of your num2\n");
	scanf("%f",&num2.real);
	printf("please enter the imaginary part of your num2\n");
	scanf("%f",&num2.image);
	 result=add(num1,num2);
	printf("the addition of the two complex number=%.2f+(%.2f)i",result.real, result.image);
	


}
   cmplex  add(cmplex n1,cmplex n2)	
  {
      addcom.real=(n1.real)+(n2.real);
      addcom.image=(n1.image)+(n2.image);
    return addcom;      

    }


