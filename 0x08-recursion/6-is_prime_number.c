#include "main.h"
/**
 * is_prime_number - checks if n is a prime number
 * @n: the number
 * Return: 1 if prime , 0 if not
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return;
}
