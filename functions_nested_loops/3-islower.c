#include "main.h"

/**
 * _islower - checks if char is lowercase
 * @c: char to check
 *
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
