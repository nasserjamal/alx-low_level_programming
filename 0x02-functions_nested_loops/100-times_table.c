#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: The arguments
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			{
				((i * j) / 100) == 0 ?
					_putchar(' ') :
					_putchar(((i * j) / 100) + '0');
				((i * j) / 10) == 0 ?
					_putchar(' ') :
					_putchar((((i * j) / 10) % 10) + '0');
			}
			_putchar(((i * j) % 10) + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
