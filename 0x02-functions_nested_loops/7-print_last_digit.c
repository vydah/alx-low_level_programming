#include "main.h"
/**
 * print_last_digit - Gives the last digit of a of i.
 * @i: the number to be checked.
 * Return: i%10
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	_putchar(i % 10);
	return (i % 10);
}
