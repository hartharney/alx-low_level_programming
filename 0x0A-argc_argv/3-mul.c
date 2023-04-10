#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that multiplies two argv strings
 * @argc: integer represents the number of arguments in array argv
 * @argv: a pointer to array of strings
 *
 * Return: always 0 (success)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	int multiply = 1;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiply *= ((atoi(argv[1])) * (atoi(argv[2])));
		printf("%d\n", multiply);
	}
	return (0);
}
