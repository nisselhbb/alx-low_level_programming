#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 * Return: NULL if it fails or return the concateanted
 * strings
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	int size;
	char *concatenated;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	size = s1_len + s2_len + 1;
	if (size == NULL)
	{
		return (NULL);
	}
	concatenated = (char *) malloc(size * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcat(s1, s2);
	return (concatenated);
}
