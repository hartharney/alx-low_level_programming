#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer (success), 98 (failure)
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
