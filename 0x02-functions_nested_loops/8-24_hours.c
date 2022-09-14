#include "main.h"
/**
 * jack_bauer - Prints the minute of the day for 24 hours.
 * 
 */
void jack_bauer(void)
{
	int minute = 0;
	int hour = 0;
	int i;

	for (hour = 0; hour < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hourr / 10) + '0');
			_putchar((hourr % 10) + '0');
			_putchar(';');
			_putchar((minute / 10) + '0');
			_putchar((minute / 10) + '0');
			_putchar('\n');
		}
	}
}
