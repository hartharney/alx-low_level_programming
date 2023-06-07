#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion – function prints a string followed by a new line
 * @s: string to be printed by function
 *
 * Return: new string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

