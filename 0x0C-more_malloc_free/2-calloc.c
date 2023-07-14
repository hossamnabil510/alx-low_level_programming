#include "main.h"

/**
 * *_memset - allocates memory used malloc mem.
 * @s: first string pointer
 * @b: second string pointer
 * @n: num of bytes
 * Return: pointer to the array initial.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * *_calloc - allocates memory
 * @nmemb: length
 * @size: size of ele.
 * Return: pointer
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
