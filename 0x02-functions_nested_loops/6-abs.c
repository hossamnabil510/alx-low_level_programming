#include "main.h"
/**
 * _abs - is a function to determine positive and negative nums
 * @n: check the input
 * Return: 1 is lowercase or  oterwise is 0
*/

int _abs(int n)
{

	if (n >= 0)
	{
		_putchar(n);
	}
	else
		printf("%i", -1*n);
	return (0);

}
