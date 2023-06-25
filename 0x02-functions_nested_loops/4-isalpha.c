#include "main.h"
/**
 * _isalpha - is a function to determine lowercase
 * @c: check the input
 * Return: 1 is lowercase or uppercase oterwise is 0
*/

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
