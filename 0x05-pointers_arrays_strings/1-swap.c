#include "main.h"
/**
 * swap_int - swap values to ints
 * @a: intger ro swap
 * @b: intger to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
