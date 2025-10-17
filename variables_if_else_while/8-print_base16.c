#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hex[] = "abcdef";

	for (i = 0; i <= 9; i++)
		putchar('0' + i);

	for (i = 0; i <= 5; i++)
		putchar(hex[i]);

	putchar('\n');

	return (0);
}
