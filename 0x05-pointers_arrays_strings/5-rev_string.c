#include "main.h"
/**
 * rev_string - prints a string followed by a new line.
 * @s: call value
 */

void rev_string(char *s)
{
	int i;
	int j;
	char r[1000];


	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[i] = r[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}
