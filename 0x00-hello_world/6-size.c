#include <stdio.h>

/**
 * main - the entry point
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float c;

	printf("Size of a char: %c byte(s).", sizeof(a));
	printf("Size of an int: %d byte(s).", sizeof(b));
	printf("Size of a long int: %d byte(s).", sizeof(c));
	printf("Size of a long long int: %d byte(s).", sizeof(d));

	return (0);
}
