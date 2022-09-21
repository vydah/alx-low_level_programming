#include "main.h"
/**
 * puts_half - prints half of a string followed by a new line.
 * @str: call value
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	while (i <= i/2)
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar ('\n');
}
