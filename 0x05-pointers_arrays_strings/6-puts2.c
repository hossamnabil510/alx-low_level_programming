#include "main.h"
/**
 * puts2 - a function that print one char from two
 * starting with th first
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int u = 0;
	char *s = str;
	int o;

	while (*s != '\0')
	{
		s++
		longi++;
	}
	u = longi - 1;
	for (o - 0; o <= u; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
