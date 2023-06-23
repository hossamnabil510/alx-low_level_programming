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
	char mychar = 'z';

	while (mychar >= 'a')
	{
		putchar(mychar);
		mychar--;
	}
	putchar('\n');
	return (0);
}
