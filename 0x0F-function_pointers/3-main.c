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
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = get_op_func(argv[2])(num1, num2);

	if (result == -1)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", result);
	return (0);
}

