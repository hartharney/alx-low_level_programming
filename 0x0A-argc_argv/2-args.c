#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints all arguments entered in command line
 * @argc: integer represents the number of arguments in array argv
 * @argv: a pointer to array of strings
 *
 * Return: always 0 (success)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
