#include "main.h"

/**
 * _pow_recursion - function that raises a base to an exponent
 * @x: x represents base
 * @y: y represents exponent
 *
 * Return: return value of x (success)
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
	{
		return (0);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

