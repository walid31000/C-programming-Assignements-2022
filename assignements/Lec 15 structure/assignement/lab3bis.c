#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};
struct  time time t1,time t2;
struct time diff(struct time t1, struct time t2)
 {
    struct time result;

    if (t2.seconds > t1.seconds)
		{
        --t1.minutes;
        t1.seconds += 60;
    }

    result.seconds = t1.seconds - t2.seconds;

    if (t2.minutes > t1.minutes)
		{
        --t1.hours;
        t1.minutes += 60;
    }

    result.minutes = t1.minutes - t2.minutes;
    result.hours = t1.hours - t2.hours;

    return result;
}

int main() {
    //struct time t1 = { 10, 30, 40 };
  // struct time t2 = { 8, 20, 30 };
    struct time diff_time;
	printf("please enter time1 hour :\n");
	scanf("%d",&time t1.hours);
	printf("please enter time1 minute :\n");
	scanf("%d",&time t1.minutes);
	printf("please enter time1 second :\n");
	scanf("%d",&time1.seconds);
	
	
	printf("please enter time2 hour :\n");
	scanf("%d",&time t2.hours);
	printf("please enter time2 minute :\n");
	scanf("%d",&time t2.minutes);
	printf("please enter time1 second :\n");
	scanf("%d",&time t2.seconds);

    diff_time = diff(t1, t2);

    printf("Time Difference: %d:%d:%d - %d:%d:%d = %d:%d:%d\n",
        t1.hours, t1.minutes, t1.seconds,
        t2.hours, t2.minutes, t2.seconds,
        diff_time.hours, diff_time.minutes, diff_time.seconds);

    return 0;
}
