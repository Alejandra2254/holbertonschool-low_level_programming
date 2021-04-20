#include "search_algos.h"
/**
 * binary_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Your function must return the first index where value is located
 * If value is not present in array or if array is NULL, your function must -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid = 0, left = 0, right = size - 1, i = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			{
				printf("%d, ", array[i]);
			}
		}
		printf("%d\n", array[i]);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
