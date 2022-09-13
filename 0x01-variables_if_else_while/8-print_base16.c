#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * Return: 0 on success
 *
 */
int main(void)
{
	int n = 0;

	char c = 'a';

	for (n = 0; n < 16; n++)
	{
		if (n <= 9)
		{
			printf("%d", n);
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
