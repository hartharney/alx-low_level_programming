#include "main.h"
/**
 * _is_prime_number - function that evaluates if number is prime
 * @n: number to evaluate
 * Return: return 1 (success), 0 (failure)
 */
int _is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
		return (actual_prime(n, n - 1));
	}
}
/**
 * actual_prime - function recurses to find if number is prime
 * @n: n represents number
 * @i: iterative number
 * Return: return 1 (prime), 0 (failure)
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
		return (actual_prime(n, i - 1));
}
