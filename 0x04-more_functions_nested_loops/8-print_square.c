#include "main.h"

/**
 * print_square - Prints the square of numbers
 * @n: Is the argument
 * Return: Returns nothing
 */

void print_square(int n)
{
	int x = 0, y;

	while (x < n && n > 0)
	{
		y = 0;
		while (y < n)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
	if (x == 0)
		_putchar('\n');
}
