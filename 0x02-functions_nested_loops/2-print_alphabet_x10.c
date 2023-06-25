#include "main.h"
/**
 * print_alphabet_x10 - used to print from a to z using putchar
 * Return: 0 is sucessful
*/

void print_alphabet_x10(void)
{
	int c, d;

	for (d = 0; d <= 9; d++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
