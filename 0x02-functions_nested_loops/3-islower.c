#include "main.h"
/**
 * _islower - is a function to determine lowercase
 * @c: check the input
 * Return: 1 is lowercase oterwise is 0
*/

int _islower(int c)
{

	if (c >= 'a')
		return (1);
	if (c <= 'z')
		return (1);
	else
		return (0);
}
