#include "main.h"

/**
 * _strlen_recursion - function that returns lenght of string
 * @s: represents string whose length is measured
 *
 * Return: Always 0 (sucess)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
