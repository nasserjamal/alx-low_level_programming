#include "main.h"

/**
 * _atoi - Converts a string to integer
 * @s: Argument of string to be converted
 *Return: Value of string
 */

int _atoi(char *s)
{
	int op = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			op *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);

	return (num * op);
}
