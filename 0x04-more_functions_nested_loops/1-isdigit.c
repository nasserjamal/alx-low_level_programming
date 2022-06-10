#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if argument is digit
 * @c: argument
 * Return: 1 if is digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
