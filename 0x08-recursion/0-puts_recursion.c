#include "main.h"
#include <string.h>

/**
 * _puts_recursion - this function prints a string using putchar
 * @s: string to be evaluated
 *
 * Return: always return string
 */
void _puts_recursion(char *s)
{
	int len = strlen(s) + 1;

	if(len == 0)
		return 0;
	_putchar(s) + _puts_recursion(s+1); 
}
