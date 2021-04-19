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
	int mid, left = 0, right = size - 1, i;

	while (left < right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf(" %d", array[i]);
				printf("\n");
				break;
			}
			printf(" %d,", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] == array[value])
			return (array[mid]);
		else if (array[value] < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
