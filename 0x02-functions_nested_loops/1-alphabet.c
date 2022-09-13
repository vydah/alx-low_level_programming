#include "main.h"

/**
 *  print_alphabet- prints all the alphabets in lower cases
 *  Return: nothing
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar (c);
		c++;
	}
	_putchar ('\n');
}
