#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: The first string to be concat
 * @s2: Thesecond string
 * @n: No of characters to cancat
 * Return: Pointer to a newly allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString = malloc(sizeof(s1) + n);
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (newString == NULL)
		return (NULL);
	while (*s1)
	{
		newString[i] = *s1;
		i++;
		s1++;
	}
	n += i;
	while (*s2 && n > i)
	{
		newString[i] = *s2;
		i++;
		s2++;
	}
	newString[i] = '\0';
	return (newString);
}
