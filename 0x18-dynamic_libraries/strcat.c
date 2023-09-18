#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings. Overwriting NULL terminator
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = strlen(dest);
	int src_length = strlen(src);
	int size = dest_length + src_length + 1;
	int i;

	for (i = 0; i < src_length; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[size - 1] = '\0';
	return (dest);
}
