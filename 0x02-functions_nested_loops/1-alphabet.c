#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: print_alphabet from a - z using putchar prototype
 * Return: zero sucess
*/

void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		{
			_putchar(c);
			c++;
		}
			_putchar('\n');
}
