#include "main.h"

/**
 * string_toupper - Converts lower case charactersto upper case
 * @str: The string to be converted
 *
 * Return: The converted string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}

