#include "main.h"

/**
 *  _islower- checks if the value used to call it is lowercase
 *  Return: 1 if c is lower case, 0 if c otherwise
 */

int _islower(int c)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if(n == c)
			{
				return (1);
			}
			else
			{
				return (0);
			}
	}
}


