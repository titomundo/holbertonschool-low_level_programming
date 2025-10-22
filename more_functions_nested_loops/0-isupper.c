#include <unistd.h>

/**
 * _isupper - checks if a character is upper case
 * @c: The character to check
 *
 * Return: int
 */
int _isupper(int c)
{
	if ((c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
