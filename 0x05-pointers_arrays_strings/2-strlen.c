#include "main.h"
/**
 * _strlen - calculates the lenght of string.
 * @s: string value
 * Return: the string count
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
