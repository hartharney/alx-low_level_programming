#include "main.h"

/**
 * _puts_recursion - this function prints a string using putchar
 * @s: string to be evaluated
 *
 * Return: always return string
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}
