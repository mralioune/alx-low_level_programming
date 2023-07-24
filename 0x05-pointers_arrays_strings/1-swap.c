#include "main.h"

/**
 * swap_int - that swaps the values of two integers.
 * @a: input parametre
 * @b: input parametre
 *  Return : n
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = b;
	*b = a;
}
