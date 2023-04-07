#include "main.h"

/**
 * factorial - function that calculates the factorial
 * of a given number
 * @n - factorial number passed as parameter
 *
 * Return: Always 0 (success);
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
