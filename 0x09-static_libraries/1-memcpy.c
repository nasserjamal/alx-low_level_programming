#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: Source
 * @n: no of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
