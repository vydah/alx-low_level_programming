#include "main.h"

/**
 *  main- prints the string _putchar
 *  Return: 0 if success
 */

int main(void)
{
	void print_alphabet(void);
	return (0);
}

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
}
