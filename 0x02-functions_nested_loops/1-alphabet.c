#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: _putchar using putchar prototype
 * Return: zero sucess
*/

int main(void)
{
	int c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
			_putchar('\n');
	return (0);
}
