#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list
 * @head: pointer to the head of the list_t list to be freed
 * Description: Frees each node of a linked list_t list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
