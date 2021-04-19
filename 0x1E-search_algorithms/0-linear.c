#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Your function must return the first index where value is located
 * If value is not present in array or if array is NULL, your function must -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0, size_i;

	size_i = size;

	if (!array)
		return (-1);
	for (i = 0; i < size_i; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
