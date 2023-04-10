#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calculates change from cash given
 * @argc: integer represents the number of arguments in array argv
 * @argv: a pointer to array of strings
 *
 * Return: always 0 (success)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	int i = 0;
	char coin_values[5] = {25, 10, 5, 2, 1};
	int cents = 0;
	int cash = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cash < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (cash >= coin_values[i])
		{
			cents += cash / coin_values[i];
			cash = cash % coin_values[i];
		}
	}
	printf("%d\n", cents);
	return (0);
}
