#include "main.h"

/**
 * _isupper - cheack if the character is upper or lower
 * @c: input char
 * Return: 1 if uppercase 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
