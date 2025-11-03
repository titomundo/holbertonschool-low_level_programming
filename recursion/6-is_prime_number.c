#include "main.h"

/**
 * true_prime - helper function to check prime numbers
 * @n: source number
 * @i: division of source
 *
 * Return: int
 */
int true_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);
	else
		return (true_prime(n, i - 1));
}

/**
 * is_prime_number - returns 1 if a number is a prime number
 * @n: source number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{

	if (n < 0)
		return (0);

	return (true_prime(n, n / 2));
}
