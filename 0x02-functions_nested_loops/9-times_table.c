#include "main.h"

/**
 * times_table - prints the multiplication table
 *
 * Return: success
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int tens = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			tens = '0' + (x * y) / 10;
			if (tens != 48)
				_putchar(tens);
			else
				if (y != 0)
				_putchar(' ');
			_putchar('0' + (x * y) % 10);
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
