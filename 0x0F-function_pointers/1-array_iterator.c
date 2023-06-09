#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 * @array: array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: No return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array && action)
	{
		for (m = 0; m < size; m++)
			action(array[m]);
	}
}
