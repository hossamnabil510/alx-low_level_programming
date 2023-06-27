#include "main.h"
/**
 * _puts - a function that takes prints a string with new line
 * @str: string to print
 */

void _puts(char *str)
{
	while (*str != "\0")
	{
		_putchar(*str++);
	}
	_putchar('\n');

}
