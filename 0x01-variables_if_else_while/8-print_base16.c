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
	int CA = 97;

	while (mychar <= 57)
	{
		putchar(mychar);
		mychar++;
	}
	while (CA <= 102)
	{
		putchar(CA);
		CA++;
	}
	putchar('\n');
	return (0);
}
