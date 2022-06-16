#include <string.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n characters
 * @dest: The destination
 * @src: The string source
 * @n: The number of bytes.
 *
 * Return: A pointer to the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
