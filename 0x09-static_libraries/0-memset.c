#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: Pointer of address to be filled
 * @b: The character to fill
 * @n: size of addresses to fill
 * Return: Pointer to the memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
