#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - rellocates a memory block
 * @ptr: pointer to the previous memory block
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: pointer if equal, if ptr is NULL return
 * new size, NULL if new size equals to 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
	{
		return (NULL);
	}
	memcpy(ptr1, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (ptr1);
}
