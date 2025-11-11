#include "function_pointers.h"
/**
 * int_index - returns the index of a searched int
 * @array: array to search in
 * @size: size of the array
 * @cmp: function to compare values
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
