#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n characters of a string
 * @a: string to print
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf("%s", ", ");

	}

	putchar('\n');
}
