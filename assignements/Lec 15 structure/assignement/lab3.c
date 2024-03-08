#include<stdio.h>
# include"STD_TYPES.h"

typedef struct
	{
		uint32 hour;
		uint32 minute;
		uint32 second;
	}time ;
	
	time  time1,time2,diff,result,t1,t2;
void timecal (time t1,time t2,time *diff);	
  int main()
	
{
	printf("please enter time1 hour :\n");
	scanf("%d",&time1.hour);
	printf("please enter time1 minute :\n");
	scanf("%d",&time1.minute);
	printf("please enter time1 second :\n");
	scanf("%d",&time1.second);
	
	
	printf("please enter time2 hour :\n");
	scanf("%d",&time2.hour);
	printf("please enter time2 minute :\n");
	scanf("%d",&time2.minute);
	printf("please enter time2 second :\n");
	scanf("%d",&time2.second);

	timecal(time1,time2,&diff);
	printf("the difference between the two times is %d hour and %d minutes and %d seconds ",diff.hour,diff.minute,diff.second);
	
	
}

 void timecal (time t1,time t2,time *diff)
{
	while(t2.second<t1.second)
	{
		--t2.minute;
		t2.second +=60;
	}	
	while(t2.minute<t1.minute)
	{
		--t2.hour;
		t2.minute +=60;
	}	
	
	diff->second=t2.second-t1.second;
	diff->minute=t2.minute-t1.minute;
	
	diff->hour=t2.hour-t1.hour;
	
	
		
}		
	