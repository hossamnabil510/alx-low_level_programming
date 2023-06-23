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
	int mychar = 48;

	while (mychar <= 57)
	{
		putchar(mychar);
		mychar++;
	}
	putchar('\n');
	return (0);
}
