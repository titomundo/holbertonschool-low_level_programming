#include "main.h"

/**
 * print_triangle - prints a triangle times an integer
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 1; i < size - j; i++)
				_putchar(' ');

			for (k = 0; k <= size - i; k++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
