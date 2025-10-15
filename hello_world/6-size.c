#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s", "Size of a char: ");
	printf("%d", sizeof(char));
	printf("%s\n", " byte(s)");

	printf("%s", "Size of an int: ");
	printf("%d", sizeof(int));
	printf("%s\n", " byte(s)");

	printf("%s", "Size of a long int: ");
	printf("%d", sizeof(long));
	printf("%s\n", " byte(s)");

	printf("%s", "Size of a long long int: ");
	printf("%d", sizeof(long long));
	printf("%s\n", " byte(s)");

	printf("%s", "Size of a float: ");
	printf("%d", sizeof(float));
	printf("%s\n", " byte(s)");

return (0);
}
