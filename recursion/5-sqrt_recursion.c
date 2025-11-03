#include "main.h"

/**
 * true_sqrt - helper function using binary search
 * @n: source number
 * @low: bottom search
 * @high: top search
 *
 * Return: int
 */
int true_sqrt(int n, int low, int high)
{
	int mid = low + (high - low) / 2;
	int midsqrt = mid * mid;

	if (midsqrt == n)
		return (mid);
	else if (midsqrt < n)
		return (true_sqrt(n, mid + 1, high));
	else
		return (true_sqrt(n, low, mid - 1));
}

/**
 * _sqrt_recursion - returns the square root of an integer
 * @n: source number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);

	return (true_sqrt(n, 1, n));
}
