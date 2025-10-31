#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int neg = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
			neg++;

		if (s[i] >= 48 && s[i] <= 57)
		{
			n = n * 10 + (s[i] - '0');

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}

		i++;
	}

	if (neg % 2 != 0)
		n *= -1;

	return (n);
}

/**
 * print_int - prints an integer
 * @n: number to print
 *
 * Return: void
 */
void print_int(int n)
{
	if (n > 9)
		print_int(n / 10);

	_putchar('0' + (n % 10));
}

/**
 * _print_err - prints "Error" to stdout
 *
 * Return: void
 */
void _print_err(void)
{
	char *msg = "Error";
	int i = 0;

	while (msg[i] != '\0')
	{
		_putchar(msg[i]);
		i++;
	}

	_putchar('\n');
}

/**
 * main - run code
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		_putchar('0' + 0);
		_putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
			sum += _atoi(argv[i]);
		else
		{
			_print_err();
			return (1);
		}
	}

	print_int(sum);
	_putchar('\n');

	return (0);
}
