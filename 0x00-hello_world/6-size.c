#include <stdio.h>

/**
 * main - prints text
 * Return:0 sucessful
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %a byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a char: %b byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %c byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %e byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
