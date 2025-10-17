#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet_caps[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);

	for (i = 0; i < 26; i++)
		putchar(alphabet_caps[i]);

	putchar('\n');

	return (0);
}
