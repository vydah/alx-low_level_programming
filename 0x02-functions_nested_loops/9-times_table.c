#include "main.h"
/**
 * times_table - Prints the 9 timestable, starting with zero.
 */
void times_table(void)
{
	int number;
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		number = i;
		for (j = 0; j <= 9; j++)
		{
			_putchar(number * j);
			_putchar(',');
		}
		_putchar('\n');
	}
}
