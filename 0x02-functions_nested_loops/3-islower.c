#include "main.h"

/**
 *  _islower- checks if c is lowercase
 * @c: character to test
 *  Return: 1 if c is lower case, 0 if c otherwise
 */

int _islower(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}


