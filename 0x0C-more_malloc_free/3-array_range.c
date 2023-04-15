#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function makes integer array
 * @min: min int
 * @max: max int
 *
 * Return: pointer (success)
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i, range;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	pointer = malloc(sizeof(int) * range);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		pointer[i] = min++;
	return (pointer);
}
