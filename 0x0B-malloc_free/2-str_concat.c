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
	int s1_len = 0;
	int s2_len = 0;
	int size = 0;
	char *concatenated = NULL;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	size = s1_len + s2_len + 1;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concatenated = (char *) malloc(size * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strcat(concatenated, s2);
	return (concatenated);
}
