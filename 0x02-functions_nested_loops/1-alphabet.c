#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: _putchar using putchar prototype
 * Return: zero sucess
*/

int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
		{
			_putchar(c);
			c++;
		}
			_putchar('\n');
	return (0);
}
