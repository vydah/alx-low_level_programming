#include "main.h"
/**
 * times_table - Prints the 9 timestable, starting with zero.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
			_putchar(',');
		}
		_putchar('\n');
	}
}
