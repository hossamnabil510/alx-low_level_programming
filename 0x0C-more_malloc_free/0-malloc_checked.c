#include "main.h"
/**
 * *malloc_checked - allocates memory used malloc mem.
 * @b: integer
 * Return: pointer to the array initial.
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
