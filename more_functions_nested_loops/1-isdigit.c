#include "main.h"

/**
 * _isdigit - checks if a character is a digit from 0 to 9
 * @c: The character to check
 *
 * Return: int
 */
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
