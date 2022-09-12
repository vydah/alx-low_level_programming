#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * Return: 0 on success
 *
 */
int main(void)
{
	int n = '0';

	while (n < '10')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
