#include "main.h"

/**
 * print_alphabet - prints the alphabet in order
 *
 * Return: 0 for success
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
