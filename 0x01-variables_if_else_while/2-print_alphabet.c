#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabets from a-z
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	return (0);
}
