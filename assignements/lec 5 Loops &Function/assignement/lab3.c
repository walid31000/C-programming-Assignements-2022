#include<stdio.h>
void print_prime (int low,int high);
int prime (int );
int main ()
{
int x,y,result;
printf("please enter the value of the two numbers \n");
scanf("%d%d",&x,&y);
 printf("all the prime numbers between %d and %d \n",x,y);	
print_prime(x,y);
return 0;

}


void print_prime(int low,int high)
{
	
	while(low<=high)
	{		
       
  
      if(prime(low))
     {
	     printf(" the number %d is prime \n",low);
     }
       low++;
	  
	}
	
	
	
	
	

}

  int prime (int x)
    {
	      int i;
            for(i=2;i<=x/2;i++)
           {
	           if(x%i==0)
   
	           return 0;
            }
        
        return 1;
    }



