#include "main.h"
#include <stdio.h>

/**
 * _puts - prints to standard io
 * @str: string character
 *
 * Return: string
 */
void _puts(const char* str) 
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
