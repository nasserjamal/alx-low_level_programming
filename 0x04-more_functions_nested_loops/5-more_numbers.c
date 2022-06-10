#include "main.h"

/**
 * more_numbers -  prints 0 to 14 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	int a = 0;
	int b;
	int tens;

	for (a = 48; a <= 57; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			tens = '0' + (b / 10);
			if (tens != '0')
				_putchar(tens);
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
