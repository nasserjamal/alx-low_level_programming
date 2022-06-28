#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string
 * @s2: The last string
 * Return: The returned concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ans;
	int index, i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	ans = malloc(sizeof(char) * len);

	if (ans == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		ans[i++] = s1[index];

	for (index = 0; s2[index]; index++)
		ans[i++] = s2[index];

	return (ans);
}
