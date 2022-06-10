#include "main.h"

/**
 * more_numbers -  prints 0 to 14 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	int a = 0;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= '14'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
