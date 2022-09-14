#include "main.h"
/**
 * print_last_digit - Gives the last digit of a of i.
 * @i: the number to be checked.
 * Return: i%10
 */
int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
