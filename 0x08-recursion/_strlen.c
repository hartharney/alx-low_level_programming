#include "main.h"

/**
 * _strlen - function that returns lenght of string
 * @s: string to be measured
 *
 * Return: Always 0 (sucess)
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
