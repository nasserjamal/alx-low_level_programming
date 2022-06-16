#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @src: Argument of src
 * @dest: Destination argument
 * Return: the resulting string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
