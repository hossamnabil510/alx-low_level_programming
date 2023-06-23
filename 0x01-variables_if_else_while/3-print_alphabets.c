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
	char mychaR = 'A';

	while (mychar <= 'z')
	{
		putchar(mychar);
		mychar++;
	}

	while (mychaR <= 'Z')
	{
		putchar(mychaR);
		mychaR++;
	}
	putchar('\n');
	return (0);
}
