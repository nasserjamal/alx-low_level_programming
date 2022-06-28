#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
	int length = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		length++;
	newSpace = malloc(sizeof(char) * (length + 1));
	if (newSpace == NULL)
		return (NULL);
	newSpace = strdup(str);
	newSpace[strlen(str)] = '\0';
	return (newSpace);
}
