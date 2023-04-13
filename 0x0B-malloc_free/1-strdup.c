#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function retuens pointer to newly allocated memory
 * @str: string to be duplicated
 *
 * Return: pointer (success), NULL if insufficient memory (failure)
 */
char *_strdup(char *str)
{
	char *dupl;
	int i, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	dupl = malloc(sizeof(char) * (length + 1));
	if (dupl == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dupl[i] = str[i];
	}
	dupl[i] = '\0';
	return (dupl);
	free(dupl);
}
