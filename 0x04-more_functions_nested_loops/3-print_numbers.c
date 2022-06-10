#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * Followed by a new line
 * Return: void. Does not return anything
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i < 58; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}
