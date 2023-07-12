#include "main.h"

/**
 * main - cheack if the character is upper or lower
 * Return: 0 umber of _
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 ! n% 5 == 0)
			_printf("Fizz");
		if (n % 5 == 0 ! n % 3 == 0)
			_printf("Buzz");	
		if (n % 15 == 0)
			_printf("FizzBuzz");
		else
			_printf("%i", n);
		_printf(" ");
	}
	return (0);
}

