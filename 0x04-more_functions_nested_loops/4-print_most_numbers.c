#include "main.h"

/**
 * print_most_numbers - cheack if the character is upper or lower
 * Return: if uppercase 0 otherwise
*/

void print_most_numbers(void)
{
	for (c = 48; c <= 57; c++)
	{
		while (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
