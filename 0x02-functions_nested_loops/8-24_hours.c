#include "main.h"
/**
 * jack_bauer - Prints the minute of the day for 24 hours.
 * 
 */
void jack_bauer(void)
{
	int minute = 00;
	int hour = 00;
	int i;

	while(hour != 23 && minute != 59)
		{
			for(i = 0; i <= 60; i++)
			{
				minute = minute + 1;
				if(minute == 60)
				{
					hour == hour + 1;
					i = 0;
				}
			}
			_putchar(hour':'minute);
		}
}
