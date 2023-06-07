#include "function_pointers.h"

/**
 * array_iterator - iterates over every element
 * @array: integers present in array
 * @size: array size
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}