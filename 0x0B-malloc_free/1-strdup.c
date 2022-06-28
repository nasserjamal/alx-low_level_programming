#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string passed
 * Return: pointer to the new space
 */
char *_strdup(char *str)
{
	char *newSpace = malloc(strlen(str));
	unsigned int i = 0;

	if (str == NULL || newSpace == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		newSpace[i] = str[i];
	}
	return (newSpace);
}
