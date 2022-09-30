#include "main.h"
/**
 * _strlen_recursion - prints a string with recursion
 * @s: string to count
 * Return: count which is the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (s[0] == '\0')
	{
		count = count + 0;
	}
	else if (s[1] == '\0')
	{

		count = count + 1;
	}
	else
	{
		_strlen_recursion(s + 1);
		count = count + 1;
	}
	return (count);
}
