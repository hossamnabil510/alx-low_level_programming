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

	char mychar = 'a';

	while (mychar <= 'z')
	{
		if (mychar == 'e' || mychar == 'q')
			mychar++;
		putchar(mychar);
		mychar++;
	}

	putchar('\n');
	return (0);
}
