

#include "main.h"

/**
 * print_square - cheack if the character is upper or lower
 * @size: number of _
*/

void print_square(int size)
{
	int c, d;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (c = 1 ; c <= size; c++)
		{
			_putchar(35);
			for (d = 1 ; d <= c; d++)
				_putchar(35);
			_putchar('\n');
		}
	}
}

