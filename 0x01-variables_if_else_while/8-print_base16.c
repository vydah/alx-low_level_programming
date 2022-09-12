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
		if (n > 9)
		{
			printf("%c, c");
			c++;
		}
		else
			printf("%d, n")
	}
	printf("\n");
	return (0);
}