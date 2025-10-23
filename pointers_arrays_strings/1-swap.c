#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first pointer
 * @b: second pointer
 *
 * Return - void
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
