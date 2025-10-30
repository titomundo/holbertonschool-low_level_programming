#include "main.h"

/**
 * factorial - returns factorial value of a natural number
 * @n: original number
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1 || n == 0)
		return (1);

	return (n * factorial(n - 1));
}
