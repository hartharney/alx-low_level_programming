#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);
	if (pointer == NULL)
		return (NULL);
	return (pointer);
}
