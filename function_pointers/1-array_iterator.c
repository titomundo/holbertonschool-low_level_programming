#include "function_pointers.h"
/**
 * array_iterator - aplies a function to every element of an array
 * @array: list of items to iterate through
 * @size: size of the array
 * @action: function to use on the array elements
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
