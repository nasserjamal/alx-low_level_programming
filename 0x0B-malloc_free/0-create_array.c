#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: Size of array
 * @c: The character to fill
 * Return: pointer address to the char
 */
char *create_array(unsigned int size, char c)
{
	char *theArray = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	while (size)
	{
		theArray[size - 1] = c;
		size--;
	}
	return (theArray);
}
