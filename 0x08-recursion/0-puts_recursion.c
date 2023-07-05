#include "main.h"

/**
 * _print_rev_recursion - print string with new line
 * @s: printed string
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
