#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: poiter to the array
 * @size: size of the array
 * @action: pointer to the function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end_of_arr = &array + &size - 1;

	if (array && size && action)
	{
		for (array = 0; array <= end; array++)
			(*action)(*array);
	}
}
