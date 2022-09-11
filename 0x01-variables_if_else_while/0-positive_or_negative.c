#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if n is negativ, positive, or a zero value
 * return 0: on success
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d\n", n, "is positive");
	}
	else if (n < 0)
	{
		printf("%d\n", n, "is negative");
	}
	else
	{	
		printf("%d\n", n, "is zero");
	}
	
	return (0);
}
