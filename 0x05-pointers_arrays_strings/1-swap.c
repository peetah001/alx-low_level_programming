#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer1
 * @b: integer2
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;
	*b = swap;
}
