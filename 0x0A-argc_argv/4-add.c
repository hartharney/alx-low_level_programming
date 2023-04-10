#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function adds positive numbers
 * @argc: integer represents the number of arguments in array argv
 * @argv: a pointer to array of strings
 *
 * Return: always 0 (success)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(*argv[i] >= 48 && *argv[i] <= 57))
		{
			printf("Error\n");
			return (1);
		}
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
