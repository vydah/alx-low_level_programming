#include "main.h"
/**
 * print_rev - prints a string followed by a new line.
 * @s: call value
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (j = i ; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar ('\n');
}
