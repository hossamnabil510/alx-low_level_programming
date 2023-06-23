#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: true or false validation
 *
 * Return: 0 is sucessful
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10; 
	if (n > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (n == 0)
		printf("Last digit of %i is zere\n", n);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
