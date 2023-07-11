
#include "main.h"

/**
 * _isdigit - cheack if the character is upper or lower
 * @c: input char
 * Return: 1 if uppercase 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}
