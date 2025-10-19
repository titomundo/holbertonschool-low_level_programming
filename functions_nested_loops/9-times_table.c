#include "main.h"

/**
 * times_table - prints every time table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, value, last;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			value = j * i;

			if (value < 10)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				
				_putchar('0' + value);
			}
			else
			{
				last = value % 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + ((value - last) / 10));
				_putchar('0' + last);
			}
		}

		_putchar('\n');
	}
}
