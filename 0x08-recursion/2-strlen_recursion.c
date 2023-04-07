#include "main.h"

/**
 * _strlen_recursion - function that returns lenght of string
 * @s: represents string whose length is measured
 *
 * Return: Always 0 (sucess)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i + 0);
	}
	else
	{
	i++;
	_strlen_recursion(s + 1);
	}
	return (i);
}
