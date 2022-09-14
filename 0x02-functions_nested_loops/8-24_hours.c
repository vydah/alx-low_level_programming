#include "main.h"
/**
 * jack_bauer - Prints the minute of the day for 24 hours.
 */
void jack_bauer(void)
{
	int minute = 0;
	int hour = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
