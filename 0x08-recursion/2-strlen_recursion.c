#include "main.h"

/**
 * _strlen - function that returns lenght of string
 * @s: represents string whose length is measured
 *
 * Return: Always 0 (sucess)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
