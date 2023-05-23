#include <stdio.h>

struct time{
	int hour;
	int minut;
	int second;
};

struct time time_Add(struct time time1, struct time time2)
	{
		struct time time3;
		// Adding Hours
		time3.hour = time1.hour + time2.hour;
		//Adding minutes.
		time3.minut = time1.minut + time2.minut;

		if(time3.minut >= 60)
		{
			time3.hour++;
			time3.minut -= 60;
		}
		
		//Adding Secongs
		time3.second = time1.second + time2.second;

		if(time3.second >= 60)
		{
			time3.minut++;
			time3.second -= 60;
		}
	  return time3;
  	}	

void show_time(struct time t0)
	{
		printf("The Time is %d : %d : %d\n", t0.hour, t0.minut, t0.second);
	}

int main(void)
	{
		struct time t1, t2, t3;
		t1.hour = 6;
		t1.minut = 35;
		t1.second = 59;
		show_time(t1);

		t2.hour = 5;
		t2.minut = 23;
		t2.second = 12;
		show_time(t2);

		t3 = time_Add(t1, t2);
		show_time(t3);

		return 0;
	}	
