#include "main.h"

/**
 * _islower - checks if the arg c is lower case
 * @c: the character being checked
 *
 * Return: 1 if the c is lower case and o if otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
