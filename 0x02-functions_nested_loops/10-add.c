#include "main.h"
/**
 * add - Prints the sum of two numbers.
 * @i: one number to be added
 * @j: second number to be added
 * Return: 0
 */
int add(int i, int j)
{
	int add;

	add = i + j;

	if (add < 10)
	{
		_putchar(add * 1);
	}
	else
	{
		_putchar((add / 10) + '0');
		_putchar((add % 10) + '0');		
	}
	return (0);
}
