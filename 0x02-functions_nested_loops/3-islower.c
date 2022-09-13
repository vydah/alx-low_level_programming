#include "main.h"

/**
 *  _islower- checks if the value used to call it is lowercase
 *  Return: 1 if c is lower case, 0 if c otherwise
 */

int _islower(int c)
{
	int n;
	int r;

	for (n = 97; n <= 122; n++)
	{
		if(n == c)
			{
				r = 1;
			}
			else
			{
				r = 0;
			}
	}
	return (r);
}


