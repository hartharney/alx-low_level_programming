#include "function_pointers.h"

/**
 * int_index - checks int
 * @array: pointer
 * @size: array length
 * @cmp: compares values
 * Return: index of the fst el which the cmp func doesn't retr 0
 *         -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
