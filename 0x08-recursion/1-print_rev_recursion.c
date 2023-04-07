#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function prints string in reverse
 * @s: string to be reversed
 *
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
