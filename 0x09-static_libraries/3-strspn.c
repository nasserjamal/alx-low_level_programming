#include <string.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The initial string
 * @accept: The substring
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
