#include "main.h"

/**
 *  print_sign- checks if n is positive or negative
 * @n: character to test
 *  Return: 1 if n is positive, 0 if n is negative
 */

int print_sign(int n)
{
    int r;

    if (n > 0)
    {
        r = 1;
        _putchar('+');
    }
    else if (n == 0)
    {
        r = 0;
        _putchar('0');
    }
    else
    {
        r = -1;
        _putchar('-');
    }
    return (r);
}
