#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - calc program.
 * @argc: number of parameters
 * @argv: arguments list
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (!get_op_func(argv[2]) || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (EXIT_SUCCESS);
}

