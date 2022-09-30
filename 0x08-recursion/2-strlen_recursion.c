#include "main.h"
/**
 * _strlen_recursion - prints a string with recursion
 * @s: string to count
 * Return: count which is the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
