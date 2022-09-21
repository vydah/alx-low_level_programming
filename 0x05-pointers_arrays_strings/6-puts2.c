#include "main.h"
/**
 * puts2 - prints every other string followed by a new line.
 * @str: call value
 */

void puts2(char *str)
{
	while (*str != '\0' || *(str++) != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar ('\n');
}
