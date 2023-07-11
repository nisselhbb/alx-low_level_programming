#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string
 * @str: pointer to the string to be
 * duplicated
 * Return: NULL if it fails or duplicated
 * string if opposite
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	size_t len = strlen(str);
	char *duplicated = (char *) malloc((len + 1) * sizeof(char));

	if (duplicated == NULL)
	{
		return (NULL);
	}
	strcpy(duplicated, str);
	return (duplicated);
}
