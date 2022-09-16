#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *@c: call variable.
 * Return: 1 if c is a digit 0 if otherwise.
 */
int _isdigit(int c)
{
    int i;
    int r;

    for(i='48'; i <= '57', i++)
    {
        if(c == i)
            r = 1;
        else
            r = 0;
    }
    return (r);
}