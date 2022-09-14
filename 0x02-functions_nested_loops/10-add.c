#include "main.h"
/**
 * times_table - Prints the 9 timestable, starting with zero.
 * @i: one number to be added
 * @j: second number to be added
 * Return: 0
 */
int add(int i, int j)
{
	int add;

	add = (i + j) * 10;
	_putchar((add / 10) + '0');
	return (0);
}
