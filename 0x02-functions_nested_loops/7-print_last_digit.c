#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: the number being checked
 *
 * Return: the value of the last digit
 */
int print_last_digit(int c)
{
	int lastDigit = abs(c % 10);

	_putchar('0' + lastDigit);
	return (lastDigit);
}
