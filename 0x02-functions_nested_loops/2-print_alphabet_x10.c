#include "main.h"

/**
 *  print_alphabet- prints all the alphabets in lower cases 10 times
 *  Return: nothing
 */

void print_alphabet_x10(void)
{
	int n;
	for (n = 0; n < 9; n++)
	{
		char c = 'a';
		while (c < 'z')
		{
			_putchar (c);
			c++;
		}
	}
	_putchar ('\n');
}
