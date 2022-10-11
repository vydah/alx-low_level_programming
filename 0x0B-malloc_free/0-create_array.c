#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - introduction to malloc and free
 * @size : int size
 * @ c characters to copy
 * Return: 0.
 */
char *create_array(unsigned int size, char c)
{
    char *ch;
    unsigned int i = 0;

    if(size != 0)
    {
            ch = malloc(sizeof(char) * size);
        if (ch == NULL)
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
        ch[i] = c;
        i--;
    }
    return (ch);
}
