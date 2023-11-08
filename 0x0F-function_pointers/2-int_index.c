#include "function_pointers.h"

/**
 * int_index - looks for integers
 * @array: array for integer
 * @size: sixe of array
 * @cmp: compare function
 * Return: -1 If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
