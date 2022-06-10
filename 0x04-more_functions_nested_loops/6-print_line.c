#include "main.h"

/**
 * print_line - draws a straight line
 * @n: argument
 * Return: nothing
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
		a++;
	}
	_putchar('\n');
}
