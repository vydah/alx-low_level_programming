#include "main.h"
/**
 * main - check the code.
 *@c: call variable.
 * Return: 1 if uppercase 0 if otherwise.
 */
int _isupper(int c)
{
    int i;
    int r;

    for(i='65'; i <= '90', i++)
    {
        if(c == i)
            r = 1;
        else
            r = 0;
    }
    return (r);
}