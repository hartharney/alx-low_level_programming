#include "main.h"

/**
 * _pow_recursion - function that raises a base to an exponent
 * @x: x represents base
 * @y: y represents exponent
 *
 * Return: Always 0 (success)
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		result *= x;
		return (result + _pow_recursion(x, --y));
	}
	else
	{
		return (0);
	}
}
