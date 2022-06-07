#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The integer being checked by the function
 *
 * Return: 1 if n is gretare than o, 0 if n is 0, -1if n is negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
