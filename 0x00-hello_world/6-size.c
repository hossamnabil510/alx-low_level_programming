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
	printf("Size of a char: %a byte(s)\n",sizeof(a));
	printf("Size of a char: %b byte(s)\n",sizeof(b));
	printf("Size of a char: %c byte(s)\n",sizeof(c));
	printf("Size of a char: %d byte(s)\n",sizeof(d));
	printf("Size of a char: %e byte(s)\n",sizeof(e));
	return (0);
}
