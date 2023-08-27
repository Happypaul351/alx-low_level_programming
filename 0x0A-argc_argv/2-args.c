#include <stdio.h>

/**
 * main - the entry point
 * @argc: the count of argument
 * @argv: the array of argument
 * Return: the number of arguments
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
