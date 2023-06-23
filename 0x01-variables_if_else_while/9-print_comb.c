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
	int dig = 48;

	while (dig <= 57)
	{
		putchar(dig);
		putchar(',');
		putchar(' ');
		dig++;
	}
	putchar('\n');
	return (0);
}
