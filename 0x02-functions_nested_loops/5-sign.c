
#include "main.h"
/**
 * print_sign - is a function to determine positive and negative nums
 * @c: check the input
 * Return: 1 is lowercase or  oterwise is 0
*/

int print_sign(int n)
{

	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else if (c == 0)
	{
		printf("0");
		return (0);
	}
	return (0);
}
