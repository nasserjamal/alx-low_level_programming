#include <string.h>
#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: The source string to be searced
 * @needle: the string we are seaarching
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
