#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: call value
 */
void print_to_98(int n)
{
    int i = n;

	while(i <= 98)
    {
        if (i == n && n < 10)
        {
            _putchar(i + '0');
        }
        else if (i == n && n >= 10)
        {
            _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
        }
        else if(i > n && n < 10 )
        {
            _putchar(',');
            _putchar(' ');
            _putchar(i + '0');
        }
        else
        {
            _putchar(',');
            _putchar(' ');
            _putchar(((i * 1) / 10) + '0');
            _putchar((i % 10) + '0');
        }
       i++ 
    }
    _putchar('\n');
}
