#include <string.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int len = strlen(alphabet) - 1;

	for (i = 0; i <= len; i++)
		putchar(alphabet[len - i]);

	putchar('\n');

	return (0);
}
