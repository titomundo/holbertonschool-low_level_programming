#include "variadic_functions.h"

/**
* print_strings - prints a list of strings
* @separator: string to print between numbers
* @n: number of elements
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s)
			printf("%s", s);

		else
			printf("(nil)");

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	va_end(strings);

	printf("\n");
}
