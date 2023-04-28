#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - suffix's node
 * @head: list_t list
 * @str: string to suffix
 *
 * Return: address (success), NULL (failure)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *temp;
	list_t *new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	len = strlen(str);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
