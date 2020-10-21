#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: integer
 * @cmp: function pointer that search
 * Return: index of the first element of cmp function,
 * -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
