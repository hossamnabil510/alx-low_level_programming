#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: 0 is sucessful
*/

int main(void)
{
	int mychar = 0;

	while (mychar <= 9)
	{
		printf("%i", mychar);
		mychar++;
	}
	putchar('\n');
	return (0);
}
