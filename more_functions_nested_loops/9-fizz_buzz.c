#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % (3 * 5) == 0)
			printf("%s", "FizzBuzz");
		else if (j % 3 == 0)
			printf("%s", "Fizz");
		else if (j % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", j);

		if (j != 100)
			putchar(' ');
	}

	putchar('\n');

	return (0);
}
