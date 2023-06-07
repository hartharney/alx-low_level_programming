#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion - this function prints a string using putchar
 * @s: string to be evaluated
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

