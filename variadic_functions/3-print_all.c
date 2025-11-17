#include "variadic_functions.h"

/**
* print_all - prints a list of anything
* @format: what type to print
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list els;
	unsigned int i = 0, j;
	char *s, opts[] = "cifs";

	va_start(els, format);
	while (format[i])
	{
		j = 0;
		while (opts[j])
		{
			if (format[i] == opts[j] && i != 0)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(els, int));
			break;
		case 'i':
			printf("%d", va_arg(els, int));
			break;
		case 'f':
			printf("%f", va_arg(els, double));
			break;
		case 's':
			s = va_arg(els, char *);
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	va_end(els);
	printf("\n");
}
