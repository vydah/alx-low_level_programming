#include "main.h"
#include <stdio.h>

/**
 *  print_to_98- prints the string _putchar
 *  Return: 0 if success
 */

void print_to_98(int n)
{
    char c[] = "_putchar";
    int i = 0;

    while (i < 8)
    {
        _putchar(c[i]);
        i++;
    }
    printf("\n");
    return (0);
}
