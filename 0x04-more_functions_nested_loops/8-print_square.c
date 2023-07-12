

#include "main.h"

/**
 * print_square - cheack if the character is upper or lower
 * @size: number of _
*/

void print_square(int size)
{
	int w, d;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (w = 1 ; w <= size; w++)
		{
			_putchar(35);
			for (d = 1 ; d <= size; d++)
				_putchar(35);
			_putchar('\n');
		}
	}
}

