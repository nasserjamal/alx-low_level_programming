#include <string.h>
#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: The string being searched
 * @c: The character being located
 * Return: pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
