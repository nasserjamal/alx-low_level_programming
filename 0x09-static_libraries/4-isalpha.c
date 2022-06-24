#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks if caharcter is alphabet or not
 * @c: The character being checked
 *
 * Return: 1 if c is a letter, or 0otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
