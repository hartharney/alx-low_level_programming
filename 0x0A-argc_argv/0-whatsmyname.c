#include "main.h"
#include <stdio.h>

/**
 * main - function that prints name of program
 * @argc: integer represents the number of argumemnts in array argv
 * @argv: a pointer to array of strings
 *
 * Return: always 0 (success)
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
