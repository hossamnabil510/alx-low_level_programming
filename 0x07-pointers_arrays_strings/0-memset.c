#include "main.h"

/**
 * _memset - entry point
 * @s: destination
 * @b: bytes cons
 * @n: num of bytes
 * Return: 0 is sucessful
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (0);
}
