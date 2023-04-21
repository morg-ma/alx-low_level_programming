#include "function_pointers.h"

/**
 * array_iterator - maps an array through a func pointer.
 * @array: the int array.
 * @size: the size of the array.
 * @action: a pointer to the function you need to use.
 * Return: NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && size && action)
		while (array <= e)
			action(*array++);
}
