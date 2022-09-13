#include "main.h"

/**
 *  main- prints the string _putchar
 *  Return: 0 if success
 */

void print_alphabet(void)

int main(void)
{
	print_alphabet();
	return (0);
}

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
