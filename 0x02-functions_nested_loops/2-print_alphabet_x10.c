#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets 10times
 *
 * Return: Alwaysreturn success;
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int counter = 0;

	while (counter < 10)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		i = 97;
		_putchar('\n');
		counter++;
	}
}

