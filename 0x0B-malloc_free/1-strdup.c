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
	char *newSpace;

	if (str == NULL)
		return (NULL);
	newSpace = malloc(sizeof(char) * (strlen(str)));
	if (newSpace == NULL)
		return (NULL);

	newSpace = strdup(str);
	return (newSpace);
}
