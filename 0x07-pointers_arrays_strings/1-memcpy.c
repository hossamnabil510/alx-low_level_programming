#include "main.h"

/**
 * _memcpy - entry point
 * @dest: input
 * @src: input value
 * @n: input
 * Return: 0 is sucessful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
