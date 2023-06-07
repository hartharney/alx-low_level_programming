#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root
 * @n: n represents the number
 * Return: return value of n (success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
		return (real_sqrt_recursion(n, 0));
	}
}
/**
 * real_sqrt_recursion - function to find natural square root
 * @n: n represents number
 * @i: iterative number
 * Return: return value of n (success)
 */
int real_sqrt_recursion(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
	{
		return (i);
		return (real_sqrt_recursion(n, i + 1));
	}
}
