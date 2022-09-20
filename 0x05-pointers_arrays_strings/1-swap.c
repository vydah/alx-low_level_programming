#include "main.h"
/**
 * swap_int - updates value of pointer to 98.
 * @a: input value a
 * @b: input value b
 */
void swap_int(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
