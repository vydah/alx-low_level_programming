#include "main.h"
/**
 * _strlen_recursion - prints a string with recursion
 * @s: string to count
 * Return: count which is the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = count + 1;
		s++;
		_strlen_recursion(s);
	}
	else
	{
		count = count + 0;
	}
	return (count);
}
