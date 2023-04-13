#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and initializes it
 * @size:  size of array
 * @c: character initialized
 *
 * Return: pointer to array (success) or NULL (failure)
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			string[i] = c;
	}
	return (string);
}
