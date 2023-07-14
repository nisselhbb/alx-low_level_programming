#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 * @n: number of 1st bytes to use from s2
 * Return: NULL or pointer to the newly allocated
 * space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int conctsize;
	char *concatenated;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		conctsize = s1_len + s2_len;
	}
	else
	{
		conctsize = s1_len = n;
	}
	concatenated = (char *) malloc((conctsize + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);
	strcpy(concatenated, s1);
	for (i = s1_len; j = 0; i < conctsize; j < n; i++; j++)
		concatenated[i] = s2[j];
	return (concatenated);
}
