#include <string.h>
#include "main.h"

/**
 * checkSpaces - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: len of s
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int checkSpaces(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (checkSpaces(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = strlen(s);

	if (!(*s))
		return (1);

	return (checkSpaces(s, len, index));
}

