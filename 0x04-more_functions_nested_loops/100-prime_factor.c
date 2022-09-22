#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: return 0 with success
 */

int main (void)
{
	long i;
	long num;

	num = 612852475143;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
	}
	printf("%li\n", num);
	return (0);
}
