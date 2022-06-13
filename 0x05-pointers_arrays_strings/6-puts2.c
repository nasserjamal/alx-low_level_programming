#include "main.h"

/**
 * puts2 - prints every othercharacter of a string
 * @str: The argument 
 * Return: Returns void 
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
