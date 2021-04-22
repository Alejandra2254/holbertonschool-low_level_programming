#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value is the value to search for
 * Return: If value is not present in array or if
 * array is NULL, your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;

	if (!array)
		return (-1);
	while ((low <= high) && (mid < (high + 1)))
	{
		mid = low + ((value - array[low]) * (high - low) /
			     (array[high] - array[low]));
		if (mid < (high + 1))
		{
			printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
			if (value == array[mid])
			{
				return (mid);
			}
			else if (value < array[mid])
			{
				high = mid - 1;
			}
			else
			{
				low = mid + 1;
			}
		}
	}
	if (value == array[low])
	{
		return (low);
	}
	else
	{
		printf("Value checked array[%d] is out of range\n", mid);
		return (-1);
	}
}
