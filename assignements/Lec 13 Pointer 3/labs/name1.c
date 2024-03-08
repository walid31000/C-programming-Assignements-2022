//program to guess the right name using function
#include<stdio.h>
void guess_name( char* arr[],int size,int input);

int main()
{
	char* name[4]={"Ahmed ","Gamel" ,"Mohamed" ,"Emad"};
	char letter;
	printf("enter 1st letter");
	scanf("%c",&letter);
	guess_name(name,4,letter);
	
	
}
void guess_name( char* arr[],int size,int input)
{
  int i;
  for(i=0;i<4;i++)
	  
  {
	  
	//if(arr[i][0]==input) using subscritor  
    if( *(*(arr+i))==input)
	{
		printf("welcome %s", *(arr+i));
		break;
		
	}
  }
  if(i==4)
  {
	  printf("invalid input");
  }
		
}	