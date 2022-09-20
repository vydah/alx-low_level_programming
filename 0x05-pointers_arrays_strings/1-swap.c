#include "main.h"
/**
 * reset_to_98 - updates value of pointer to 98.
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
