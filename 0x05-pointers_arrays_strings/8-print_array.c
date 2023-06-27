#include "main.h"
/**
 * print_array - a function that prints n in array
 * @a: name of array
 * @n: number of array to print
 * Return: a , n input
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (0 - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
