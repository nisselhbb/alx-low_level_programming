#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: size of array
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int sumsize = 0;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	sumsize = nmemb * size;
	ptr = malloc(sumsize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, sumsize);
	return (ptr);
}
