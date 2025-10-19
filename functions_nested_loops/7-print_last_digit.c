#include "main.h"

/**
 * print_last_digit - returns the last digit of an integer number
 * @n: number to check
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;

	_putchar('0' + last);
	return (last);
}
