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
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of %d is %d ", n, last);

	if (last < 6 && last != 0)
		printf("%s\n", "and is less than 6 and not 0");
	else if (last == 0)
		printf("%s\n", "and is 0");
	else
		printf("%s\n", "and is greater than 5");

	return (0);
}
