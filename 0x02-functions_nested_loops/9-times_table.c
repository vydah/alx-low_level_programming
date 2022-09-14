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
			if ((i * j) <10)
			{
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar('  ');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			
		}
		_putchar('\n');
	}
}
