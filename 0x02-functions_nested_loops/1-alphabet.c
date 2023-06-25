#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - used to print a - z by putchar
 * Return: zero sucess
*/

void print_alphabet(void)

{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
