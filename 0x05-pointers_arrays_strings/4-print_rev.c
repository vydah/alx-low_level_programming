#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line.
 * @s: call value
 */

void print_rev(char *s)
{
	int i = _strlen(*s);
	int j;

	
	for (j = i ; j >= 0; j--)
	{
		_putchar(*s + j);
	}
	_putchar ('\n');
}
