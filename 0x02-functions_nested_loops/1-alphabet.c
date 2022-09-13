#include "main.h"

/**
 *  main- prints the alphabets
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
