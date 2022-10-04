#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
    char *c;
    unsigned int i = 0;

    if(size != 0)
    {
        c = malloc(sizeof(char) * size);
        if (c == NULL)
        {
            return (NULL);
        }
    }
    else
    {
        return (NULL);
    }
    while( i < size)
    {
         c[i] = 'S';
    }
    return (c);
}
