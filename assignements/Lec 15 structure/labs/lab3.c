#include<stdio.h>
	
int main ()
{
	int i,ID;
	
	typedef struct 
	{
		int math;
		int languages;
		int physics;
		int chemestry;
	}student;
	
	
	student arr[10];
	for(i=0;i<10;i++)
   {
	  	
	arr[i].math=i*5+5;
	arr[i].languages=i*5+10;
	arr[i].physics=i*5+15;
    arr[i].chemestry=i*5+20;	
   }
    printf("please enter the student ID \n");
	scanf("%d",&ID);
	if((ID<1)||(ID>10))
	{	
	
	printf("wrong ID \n");
	
	}	

	else
	{
     printf("math grade %d\n",arr[ID-1].math);
	 printf("languages grade %d\n",arr[ID-1].languages);
	 printf("physics grade %d\n",arr[ID-1].physics);
	 printf("chemestry grade %d\n",arr[ID-1].chemestry);
	}

}
	

  
	
		
		
	
		