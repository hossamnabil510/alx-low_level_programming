#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - allocates memory used malloc mem.
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: num of bytes
 * Return: pointer to the array initial.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] != '\0'; k++)
		;

	for (l = 0; s2[l] != '\0'; l++)
		;

	str = malloc(k + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n ; j++)
	{
		str[i] = s2[j];
		i++
	}

	str[i] = '\0';
	return (str);
}
