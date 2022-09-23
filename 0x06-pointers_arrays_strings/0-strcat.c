#include "main.h"

/**
 * *_strcat- prints the concatenation of two string
 * @dest: one of the string
 * @another string
 * Return: a pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char concat;
	int i = 0;
	char *d = &dest;

	while (*dest[i] != '\0')
	{
		concat[i] = dest[i];
		i++;
	}
	while (*src[i] != '\0')
	{
		concat = + *src[i];
		i++
	}
	*dest = concat;
	Return (*d);
}

