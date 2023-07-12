
#include "main.h"

/**
 * print_diagonal - cheack if the character is upper or lower
 * @n: number of _
 * Return: if uppercase 0 otherwise
*/

void print_diagonal(int n);
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1 ; c <= n; c++)
			_putchar(92);
			_putchar('\n');
		_putchar('\n');
	}
}
