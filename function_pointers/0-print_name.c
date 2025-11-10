#include "function_pointers.h"

/**
 * print_name - prints a name using f
 * @name: string to print
 * @f: function to print name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
