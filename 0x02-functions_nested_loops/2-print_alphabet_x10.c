#include "main.h"

/**
 *  print_alphabet_x10- prints all the alphabets in lower cases 10 times
 *  Return: nothing
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		char c = 'a';

		while (c < 'z')
		{
			_putchar (c);
			c++;
		}
		_putchar ('\n');
	}
}
