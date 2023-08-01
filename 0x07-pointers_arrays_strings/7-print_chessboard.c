#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @*(a):  input
 * Return: 0
 */

void print_chessboard(char *(a)[8])
{
unsigned int b, c = 0;

for (b = 0; b < 64; b++)
{
if (b % 8 == 0 && b != 0)
{
c = b;
_putchar('\0');
}
_putchar(a[b / 8][b - c]);
}
_putchar('\n');
}
