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
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
