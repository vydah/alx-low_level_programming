#include <stdio.h>
/**
 * main - prints the alphabets from a-z then A-Z
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar (C);
		C++;
	}
	putchar('\n');
	return (0);
}
