#include "main.h"

/**
 * print_dd - prints an integer of 2 digits, only for jack_bauer() use
 * @n: integer to print
 *
 * Return: void
 */
void print_dd(int n)
{
	int last;

	if (n < 10)
	{
		_putchar('0' + 0);
		_putchar('0' + n);
	}
	else
	{
		last = n % 10;
		_putchar('0' + ((n - last) / 10));
		_putchar('0' + last);
	}
}

/**
 * jack_bauer - print every minute of the day of jack bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int min, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			print_dd(hour);
			_putchar(':');
			print_dd(min);
			_putchar('\n');
		}
	}
}
