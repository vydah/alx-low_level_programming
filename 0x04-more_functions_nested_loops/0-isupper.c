#include "main.h"
/**
 * main - check the code.
 *@c: call variable.
 * Return: 1 if uppercase 0 if otherwise.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}