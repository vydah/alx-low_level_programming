#include <stdio.h>
#include "main.h"
/**
 * wildcmp - checks if two strings are alike.
 * @s1: string to check
 * @s2: string to check
 * Return: 1 identical, 0 not identical
 */
int wildcmp(char *s1, char *s2)
{
    if ((s2[0] == '*' || s2[1] == 0) && s1[0] != s2[0])
    {
        int wildcmp(s1,s2++);
    }
    else if (s1[0] == s2[0])
    {
        return (1);
    }
    else
    {
        return 0;
    }
}
