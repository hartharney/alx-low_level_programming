#include <stdlib.h>
#include "lists.h"

/**
 * list_len - length of list
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	
	return (count);
}
