#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program prints number of arguments in command line
 * @argc: integer represents the number of arguments in array argv
 * @argv: a pointer to array of strings
 *
 * Return: always 0 (success)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
