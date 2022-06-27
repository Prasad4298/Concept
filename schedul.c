#include<stdio.h>

// print time between 5.00 to 6.00 then its a wakeup time
// 6.00 to 8.30 its a workout time
// 8.30 to 9.30 its a breakfast time
// 10.00 to 12.30 its a study time 
// 12.30 to 13.30 its a lunch time
// 13.30 to 17.30 its a study time 
// 17.30 to 18.30 its a free time 
// 18.30 to 20.30 its a dinner time 
// 20.30 to 22.30 its a programming practice time
// 22.30 its a sleep time between 22.30 to 5.00 am 
 
int main()
{
	float time = 0;
	 
	printf(" Enter timing ( Indian railway time ) int the formate ( hourse.minute )\n");
	scanf("%f",&time);
	
	if((time > 5.00)&&(time < 6.00))
	{
		printf(" its time is wakeup time ....!\n ");
	}
	else if((time > 6.00)&&(time < 8.30))
	{
		printf(" Its a workout time ....!\n");
	}
	else if((time > 8.30)&&(time < 9.30))
	{
		printf(" its time is breakfast time ....! \n ");
	}
	else if((time > 9.30)&&(time < 12.30))
	{
		printf(" its time is study time ....!\n ");
	}
	else if((time > 12.30)&&(time < 13.30))
	{
		printf(" its time is lunch time ....!\n ");
	}
	else if((time > 13.30)&&(time < 17.30))
	{
		printf(" its time is study time ....!\n ");
	}
	else if((time > 17.30)&&(time < 18.30))
	
	{
		printf(" its time is free  time ....!\n ");
	}
	else if((time > 18.30)&&(time < 20.30))
	{
		printf(" its time is dinner time ....!\n ");
	}
	else if((time > 20.30)&&(time < 22.30))
	{
		printf(" its time is programmming practice time ....!\n ");
	}
	else if(time == 22.30)
	{
		printf(" Its time is sleeping time ....!\n");
	}
	else
	{
		printf(" read instruction carefully .....!\n");
	}

	return 0;
}