#include "main.h"

/**
 * more_numbers- prints numbers from 0 to 14, ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	char numbers[] = "01234567891011121314\n";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 21; i++)
		{
			_putchar(numbers[i]);
		}
	}

	_putchar('\n');
}
