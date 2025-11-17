#include "variadic_functions.h"

/**
* print_numbers - prints a list of numbres
* @separator: string to print between numbers
* @n: number of elements
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	va_end(numbers);

	printf("\n");
}
