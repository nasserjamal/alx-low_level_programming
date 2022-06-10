#include "main.h"

/**
 * print_diagonal - Prints out diagnoal lines
 * @n: the argument
 * Return: Return nothing
 */

void print_diagonal(int n)
{
	int x = 0, y;

	while (x < n && n > 0)
	{
		y = 0;
		while (y < x)
		{
			_putchar(' ');
			y++;
		}

		_putchar('\\');
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
