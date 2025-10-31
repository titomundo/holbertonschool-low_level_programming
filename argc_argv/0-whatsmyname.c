#include "main.h"

/**
 * main - run code
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void) argc;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
